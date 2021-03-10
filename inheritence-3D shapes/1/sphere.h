#ifndef SPHERE_H
#define SPHERE_H

#include "Shape.h"

class Sphere : public Shape {
public:
    Sphere(int x, int y,int z,int r);
    virtual void scale(int s);
    int volume();
private:
    int Radius;
};

#endif