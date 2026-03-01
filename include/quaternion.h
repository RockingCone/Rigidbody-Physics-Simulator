#ifndef QUATERNION_H
#define QUATERNION_H

class Quaternion
{
    public:
    Quaternion();

    /// @brief Sets the value of the quaternion equal to the rotation defined by a 3d vector and a rotation
    void SetEuler(double theta, double x, double y, double z);

    Quaternion operator+=(const Quaternion &q);
    Quaternion operator-=(const Quaternion &q);
    Quaternion operator*=(const Quaternion &q);

    Quaternion operator*=(const double &d);
    Quaternion operator=(const Quaternion &q);
    
    double real;
    double i;
    double j;
    double k;

    protected:

    private:
    
};

#endif