#include "string"
#include "File.h"
#include <iostream>
using namespace std;
//File::File(int init_id,string init_title,string init_content,int init_parent_id):FileSystemAll(init_id,init_title,init_parent_id)
// {
//     Content=init_content;
// }
    
string File:: return_Content(){return Content;}
    
    void File:: view(int init_id,vector <FileSystemAll*> file_systems)
    {
        print_title();
        cout<<endl;
        print_content();
    }

    string File:: return_type()
    {
        return "File";
    }

    void File::print_title()
    {
        cout<<"Title: "<<return_Title();
    }
    
    void File::print_content()
    {
        cout<<"Content:"<<endl;
        cout<<Content<<endl;
    }

