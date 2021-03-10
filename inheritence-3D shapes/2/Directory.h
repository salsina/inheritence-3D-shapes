#ifndef DIRECTORY_H
#define DIRECTORY_H 

#include "FileSystemAll.h"
#include <string>
#include<vector>

class Directory: public FileSystemAll{
public:
    Directory(int init_id ,string init_title, int init_parent_id):FileSystemAll(init_id,init_title,init_parent_id){};
    void view(int init_id,vector <FileSystemAll*> file_systems);
    string return_type();
    void print_title();
private:
};
#endif