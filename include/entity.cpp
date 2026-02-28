#pragma once
#include "entity.h"

Entity::Entity()
{
    transform.position = {0,0,0};
    transform.rotation.real = 1;
    transform.rotation.i = 0;
    transform.rotation.j = 0;
    transform.rotation.k = 0;
    velocity = {0,0,0};
}
Entity::Entity(Transform T)
{
    transform = T;
    velocity = {0,0,0};
}
Entity::Entity(Transform T, Vector3 Velocity)
{
    transform = T;
    velocity = Velocity;
}

void Entity::UpdatePosition(Vector3 Acceleration)
{
    velocity += Acceleration;
    transform.position += velocity;
}