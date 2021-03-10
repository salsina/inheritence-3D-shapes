#ifndef BADTITLE_H
#define BADTITLE_H
#include <string>
#include "Exception.h"
using namespace std;

class BadTitle: public Exception{
public:
    virtual string what() ; 
};
#endif 