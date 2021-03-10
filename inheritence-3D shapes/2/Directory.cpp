#include "string"
#include "Directory.h"
#include <iostream>
using namespace std;

void Directory::view(int init_id,vector <FileSystemAll*> file_systems)
{
    print_title();
    cout<<endl;
    for(int i=0;i<file_systems.size();i++)
        if(file_systems[i]->return_Parent_ID()==this->return_ID())
            cout<<"Title: "<<file_systems[i]->return_Title()<<", Type: "<<file_systems[i]->return_type()<<endl;              
}

string Directory::return_type()
{
    return "Directory";
}

void Directory::print_title()
{
    cout<<"Title: "<<return_Title();
}
