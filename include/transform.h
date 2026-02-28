#pragma once
#include "vector3.cpp"
#include "quaternion.cpp"

class Transform
{
    public:
    Vector3 position;
    Quaternion rotation;

    Transform();
    Transform(Vector3 Position);
    Transform(Vector3 Position, Quaternion Rotation);

    private:

    protected:

};