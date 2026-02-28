#ifndef VECTOR3_CPP
#define VECTOR3_CPP

#include "vector3.h"

Vector3::Vector3()
{
    x, y, z = 0;
}
Vector3::Vector3(long X, long Y, long Z)
{
    x = X;
    y = Y;
    z = Z;
}

Vector3 Vector3::operator+=(const Vector3 &v)
{
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
}

#endif