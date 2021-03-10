#include "cone.h"
#include <cmath>
#include <algorithm>
#define P 3.14

Cone::Cone(int x,int y,int z,int r,int h)  
      :Shape( x, y, z,"Cone")
{
    Radius=r;
    Height=h;
}

void Cone::scale(int s)
{
    Radius*=s;
    Height*=s;
}

int Cone::volume()
{
    shape_volume=(1/3 *P*pow(Radius,2)*Height);
    return shape_volume;
}
