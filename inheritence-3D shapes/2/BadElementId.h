#ifndef BADELEMENT_H
#define BADELEMENT_H

#include <string>
#include "Exception.h"
using namespace std;

class BadElementId : public Exception{
public:
    virtual string what()  ;
};
#endif