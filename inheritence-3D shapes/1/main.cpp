#include <iostream>
#include <vector>
#include "shape.h"
#include "sphere.h"
#include "cuboid.h"
#include "cone.h"

using namespace std;

int main()
{
    Shape * shape = new Cuboid ( 10 , 10 , -10 , 5 , 10 , 2 );
    cout << shape << endl ;
    shape -> move ( -10 , 0 , 5 );
    shape -> scale ( 2 );
    cout << shape << endl ;
    return 0;
}