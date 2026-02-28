#pragma once
#include "quaternion.h"
#include <cmath>

Quaternion::Quaternion()
{
    real = 1;
    i, j, k = 0;
}

void Quaternion::SetEuler(double theta, double x, double y, double z)
{
    real = cos(theta * 0.5);
    double s = sin(theta * 0.5);
    double m = 1 / sqrt((x * x) + (y * y) + (z * z));
    i = s * m * x;
    j = s * m * y;
    k = s * m * z;
}

Quaternion Quaternion::operator+=(const Quaternion &q)
{
    real += q.real;
    i += q.i;
    j += q.j;
    k += q.k;
    return *this;
}
Quaternion Quaternion::operator-=(const Quaternion &q)
{
    real -= q.real;
    i -= q.i;
    j -= q.j;
    k -= q.k;
    return *this;
}
Quaternion Quaternion::operator*=(const Quaternion &q)
{
    real = (real * q.real) - (i * q.i) - (j * q.j) - (k * q.k);
    i = (real * q.i) + (i * q.real) + (j * q.k) - (k * q.j);
    j = (real * q.j) - (i * q.k) + (j * q.real) + (k * q.i);
    k = (real * q.k) + (i * q.j) - (j * q.i) + (k * q.real);
    return *this;
}

Quaternion Quaternion::operator*=(const double &d)
{
    real *= d;
    i *= d;
    j *= d;
    k *= d;
    return *this;
}
Quaternion Quaternion::operator=(const Quaternion &q)
{
    real = q.real;
    i = q.i;
    j = q.j;
    k = q.k;
    return *this;
}