#ifndef BADPARENT_H
#define BADPARENT_H
#include <string>
#include "Exception.h"
using namespace std;

class BadParentId: public Exception{
public:
    virtual string what() ; 
};
#endif