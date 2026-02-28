#ifndef ENTITY_H
#define ENTITY_H

#include "transform.cpp"

class Entity
{
    public:
    Transform transform;
    /// @brief Measured in units/tick with units being the smallest unit of distance (established by vector3) and ticks being 1/60 of a second.
    Vector3 velocity;

    Entity();
    Entity(Transform T);
    Entity(Transform T, Vector3 Velocity);

    void UpdatePosition(Vector3 Acceleration);

    private:

    protected:

};

#endif