#ifndef ENTITY_CPP
#define ENTITY_CPP

#include "entity.h"

Entity::Entity()
{
    transform.position = {0,0,0};
    transform.rotation.real = 1;
    transform.rotation.i = 0;
    transform.rotation.j = 0;
    transform.rotation.k = 0;
    velocity = {0,0,0};
    mass = 1;
    shape = {1,0};
}
Entity::Entity(Transform T, Shape S, double Mass)
{
    transform = T;
    velocity = {0,0,0};
    mass = Mass;
    shape = S;
}
Entity::Entity(Transform T, Vector3 Velocity, Shape S, double Mass)
{
    transform = T;
    velocity = Velocity;
    mass = Mass;
    shape = S;
}

void Entity::UpdatePosition(Vector3 Acceleration)
{
    velocity += Acceleration;
    transform.position += velocity;
}

#endif