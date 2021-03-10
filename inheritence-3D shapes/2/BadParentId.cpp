#include "BadParentId.h"
#include <string>
#include <iostream>

using namespace std;

string BadParentId:: what()  
{ 
    cout << "Parent ID is not referring to a directory!" << endl; 
    return "Parent ID is not referring to a directory!"; 
}
