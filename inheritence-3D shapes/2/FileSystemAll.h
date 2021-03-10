#ifndef FILESYSTEMALL_H
#define FILESYSTEMALL_H

#include <string>
#include <vector>

using namespace std;
class FileSystemAll{
public:
    FileSystemAll(int init_id,string init_title,int init_parent_id);
    int return_ID(){return ID;}
    string return_Title(){return Title;}
    int return_Parent_ID(){return Parent_ID;}
    virtual string return_type()=0;
    virtual void view(int init_id,vector <FileSystemAll*> file_systems) = 0;
protected:
    int ID;
    string Title;
    int Parent_ID;
};
#endif