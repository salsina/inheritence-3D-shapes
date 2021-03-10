#include "Cuboid.h"

Cuboid::Cuboid(int x,int y,int z,int w,int h,int d)
    :Shape( x, y, z,"Cuboid")
{
    if (w > 0 && h > 0 && d>0)
    {
        Width = w;
        Height = h;
        Depth=d;
    }
}

void Cuboid::scale(int s)
{
    Width *= s;
    Height*=s;
    Depth*=s;
}

int Cuboid::volume()
{
    shape_volume=( Width*Depth*Height);
    return shape_volume;
}

