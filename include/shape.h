#ifndef SHAPE_H
#define SHAPE_H

#define PLANE 0
#define SPHERE 1
#define RECTANGULAR_PRISM 2

class Shape
{
    public:
    /// @brief Bounding radius of the shape. Applicable for initial collision detection for all shapes.
    long radius;
    /// @brief Collision shape of the object. 
    int shape;

    /// @brief Defaults to sphere of radius 1
    Shape();
    /// @brief Defaults to a sphere unless radius is 0, then defaults to a plane.
    Shape(long Radius);
    Shape(long Radius, int collisionShape);

    protected:

    private:

};

#endif