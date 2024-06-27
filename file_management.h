#include <iostream>
#include <fstream>
#include "auth_core.h"
#include <cstdio>

/*

todo:

create_file function
read_file function
authentication implementation
list files
create folders
change directories 
be able to open program into folders (i.e starting directory)

*/

void delete_file()
{
	remove(file_name);
	std::cout << "The respective file has been deleted.";
}

int create_file()
{

}



