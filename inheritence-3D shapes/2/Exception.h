#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
using namespace std;

class Exception{
public:
    virtual string what()=0;
};

#endif