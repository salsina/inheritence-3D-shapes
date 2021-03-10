#include "BadLinkedElement.h"
#include <string>
#include <iostream>

using namespace std;

string BadLinkedElement:: what()  
{ 
    cout << "Invalid element type requested!" << endl; 
    return "Invalid element type requested!"; 
}
