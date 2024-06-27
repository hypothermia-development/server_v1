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

int delete_file()
{
	std::cout << "Name a file to be deleted: "
	cin >> file_name;
	remove(file_name);
	std::cout << "The respective file has been deleted.";
	return 1;
}

int create_file()
{

}



