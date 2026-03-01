#ifndef ENTITY_H
#define ENTITY_H

#include "transform.cpp"
#include "shape.cpp"

class Entity
{
    public:
    Transform transform;
    
    Entity();
    Entity(Transform T);
    Entity(Transform T, Vector3 Velocity);
    
    void UpdatePosition(Vector3 Acceleration);
    
    protected:
    
    private:
    /// @brief Measured in units/update with units being the smallest unit of distance (established by vector3) and updates being defined by driver script.
    Vector3 velocity;
    Shape shape;
    
};

#endif