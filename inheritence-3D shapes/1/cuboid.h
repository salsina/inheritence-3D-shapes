#ifndef CUBOID_H
#define CUBOID_H

#include "Shape.h"

class Cuboid : public Shape{
public:
    Cuboid(int x,int y,int z,int w,int h,int d);
    virtual void scale(int s);
    int volume();
private:
    int Width;
    int Height;
    int Depth;
};
#endif