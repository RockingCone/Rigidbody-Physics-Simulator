#ifndef ENTITY_H
#define ENTITY_H

#include "transform.cpp"
#include "shape.cpp"
#include "vector3.cpp"
#include "quaternion.cpp"

class Entity
{
    public:
    Transform transform;
    
    /// @brief Defaults to a sphere of mass 1 at the origin.
    Entity();
    Entity(Transform T, Shape S, double Mass);
    Entity(Transform T, Vector3 Velocity, Shape S, double Mass);
    
    void UpdatePosition(Vector3 Acceleration);
    
    protected:
    
    private:
    /// @brief Measured in units/update with units being the smallest unit of distance (established by vector3) and updates being defined by driver script.
    Vector3 velocity;
    Shape shape;
    double mass;
    
};

#endif