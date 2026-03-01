#ifndef SHAPE_CPP
#define SHAPE_CPP

#include "shape.h"

Shape::Shape()
{
    radius = 1;
    shape = SPHERE;
}
Shape::Shape(long Radius)
{
    radius = Radius;
    if (radius == 0) shape = PLANE;
    else shape = SPHERE;
}
Shape::Shape(long Radius, int collisionShape)
{
    radius = Radius;
    shape = collisionShape;
}

#endif