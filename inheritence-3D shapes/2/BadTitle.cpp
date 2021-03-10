#include "BadTitle.h"
#include <string>
#include <iostream>

using namespace std;

string BadTitle:: what()  
{ 
    cout << "Parent directory has the same child!" << endl; 
    return "Parent directory has the same child!"; 
}
