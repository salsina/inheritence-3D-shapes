#include "shape.h"

Shape::Shape(int x, int y,int z,string name)
{
    shape_x=x;
    shape_y=y; 
    shape_z=z;
    shape_name=name;
}
void Shape::move(int delta_x, int delta_y, int delta_z)
{
    shape_x += delta_x;
    shape_y += delta_y;
    shape_z += delta_z;
}

std::ostream& operator<<(std::ostream& out,  Shape* shape)
{
    return out<<"type: "<<shape->get_name()<<", center: ("<<shape->get_x()<<", "<<shape->get_y()<<", "<<shape->get_z()<<"), volume: "<<shape->volume();
}
