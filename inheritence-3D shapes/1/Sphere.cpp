#include "sphere.h"
#include <cmath>
#include <algorithm>
#define P 3.14

Sphere::Sphere(int x, int y,int z, int r)
    : Shape( x, y, z,"Sphere")
{
    if (r > 0)
        Radius = r;
}

void Sphere::scale(int s)
{
    Radius *= s;
}

int Sphere::volume()
{
    shape_volume=( 4/3 *P*pow(Radius,3));
    return shape_volume;
}

