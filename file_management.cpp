#include "auth_core.h"
#include "file_mangement.h"
#include <iostream>
#include <string>

int file_manager()
{
    // Authentication loop v1
    while (true)
    {
        if (hasAccess == true)
        {
            break;
        }

        doLogin(password, didLogin, num_of_attempts_login);
        onAttempt(num_of_attempts_login, didLogin);
    }

    while (true)
    {
        std::string command;
        std::cout << "Enter Command: ";
        std::cin >> command;

        if (command == "delete file")
        {
            std::string file_name;
            std::cout << "Name a file: ";
            std::cin >> file_name;
            delete_file(file_name);
        }
        else if (command == "create text file")
        {
            std::string file_name;
            std::cout << "Enter file name to create: ";
            std::cin >> file_name;
            create_file(file_name);
        }
        else if (command == "read file")
        {
            std::string file_name;
            std::cout << "Enter file name to read: ";
            std::cin >> file_name;
            read_file(file_name);
        }
        else
        {
            std::cout << "That is not a valid command" << std::endl;
        }
    }

    return 1;
}
