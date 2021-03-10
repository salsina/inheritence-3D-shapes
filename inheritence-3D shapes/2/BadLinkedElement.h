#ifndef BADLINK_H
#define BADLINK_H
#include <string>
#include "Exception.h"
using namespace std;

class BadLinkedElement: public Exception{
public:
    virtual string what() ; 
};
#endif