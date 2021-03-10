#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    Shape(int x, int y,int z,string name);
    int get_x() const { return shape_x; }
    int get_y() const { return shape_y; }
    int get_z() const {return shape_z;}
    string get_name() const{return shape_name;}
    void move(int delta_x, int delta_y, int delta_z);
    int get_Volume(){return shape_volume;}
    virtual void scale(int s) = 0;
    virtual int volume() = 0;
    friend ostream& operator<<(ostream& out,Shape* shape);
protected:
    int shape_x;
    int shape_y;
    int shape_z;
    int shape_volume;
    string shape_name;
};
#endif