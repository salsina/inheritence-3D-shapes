#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>
#include "FileSystemInterfaceCopy.h"
class FileSystemInterface{
public:
    FileSystemInterface(){InterfaceCopy= new FileSystemInterfaceCopy;}
    void add_file(int init_id, string init_title, string init_content, int init_parent_id) { InterfaceCopy->add_file(init_id,init_title,init_content,init_parent_id);};
    void add_directory(int init_id, string init_title, int init_parent_id){InterfaceCopy->add_directory(init_id,init_title,init_parent_id);};
    void add_link(int init_id, string init_title, int init_element_id, int init_parent_id){InterfaceCopy->add_link(init_id,init_title,init_element_id,init_parent_id);};
    void view(int init_id){InterfaceCopy->view(init_id,InterfaceCopy->return_file_systems());};
private:
    FileSystemInterfaceCopy* InterfaceCopy;
};
#endif 