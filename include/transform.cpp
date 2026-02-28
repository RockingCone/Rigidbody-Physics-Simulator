#pragma once
#include "transform.h"

Transform::Transform()
{
    position = {0,0,0};
    rotation.real = 1;
    rotation.i = 0;
    rotation.j = 0;
    rotation.k = 0;
}
Transform::Transform(Vector3 Position)
{
    position = Position;
    rotation.real = 1;
    rotation.i = 0;
    rotation.j = 0;
    rotation.k = 0;
}
Transform::Transform(Vector3 Position, Quaternion Rotation)
{
    position = Position;
    rotation = Rotation;
}