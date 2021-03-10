#ifndef FILE_H
#define FILE_h
#include "FileSystemAll.h"
#include <string>

class File: public FileSystemAll{
public:
    File(int init_id,string init_title,string init_content,int init_parent_id):FileSystemAll(init_id,init_title,init_parent_id)     
    {
    Content=init_content;
    }
    string return_Content();   
    void view(int init_id,vector <FileSystemAll*> file_systems);
    string return_type();
    void print_title();    
    void print_content();
private:
    string Content;
};
#endif