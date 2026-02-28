#pragma once

struct Vector3
{
    public:
    Vector3();
    Vector3(long X, long Y, long Z);

    Vector3 operator+=(const Vector3 &v);

    long x;
    long y;
    long z;
};