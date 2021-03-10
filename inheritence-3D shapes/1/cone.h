#ifndef CONE_H
#define CONE_H
#include "Shape.h"
class Cone:public Shape{
public:
    Cone(int x,int y,int z,int r,int h);
    virtual void scale(int s);
    int volume();
private:
    int Radius;
    int Height;
};
#endif