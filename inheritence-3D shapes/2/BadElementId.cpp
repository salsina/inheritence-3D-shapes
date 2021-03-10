#include "BadElementId.h"
#include <string>
#include <iostream>
using namespace std;

string BadElementId :: what()
{
    cout << "Invalid element ID requested!" << endl; 
    return "Invalid element ID requested!"; 
}