#include <iostream>
#include <fstream>
#include "auth_core.h"
#include <cstdio>
#include <string>  // Include the string header

/*

todo:

create_file function - done by chatgpt
read_file function - done by chatgpt
authentication implementation - done by me
list files- todo the 28th	
create folders - todo the 28th
change directories todo the 30th
be able to open program into folders (i.e starting directory)

*/

void delete_file(const std::string &file_name)
{
    std::remove(file_name.c_str());
    std::cout << "The respective file has been deleted." << std::endl;
}

bool create_file(const std::string &file_name)
{
    std::ofstream file(file_name);
    if (file)
    {
        std::cout << "File created successfully: " << file_name << std::endl;
        file.close();
        return true;
    }
    else
    {
        std::cerr << "Failed to create file: " << file_name << std::endl;
        return false;
    }
}

bool read_file(const std::string &file_name)
{
    std::ifstream file(file_name);
    if (file)
    {
        std::string line;
        while (std::getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.close();
        return true;
    }
    else
    {
        std::cerr << "Failed to open file: " << file_name << std::endl;
        return false;
    }
}
