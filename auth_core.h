#include <iostream>
#include <cstdlib>

/*

Authentication Core V1

This authentication program (very bad) is to very lightly secure the more important aspects of a server

*/

int num_of_attempts_login = 0;
bool didLogin = false;
bool hasAccess = false;

int password = 1234;

void doLogin(int password, bool &didLogin, int &num_of_attempts_login)
{
    int guessed_password;
    std::cout << "Enter password: ";
    std::cin >> guessed_password;

    if (password == guessed_password)
    {
        didLogin = true;
        
    }
    else
    {
        didLogin = false;
        num_of_attempts_login = num_of_attempts_login + 1;
        
    }
}

void onAttempt(int num_of_attempts_login, bool didLogin)
{
    if (num_of_attempts_login > 3)
    {
        std::cout << "You have been locked out of this program";
        std::exit(EXIT_FAILURE);
    }
    else
    {
        if (didLogin)
        {
            hasAccess = true;
        }
        else
        {
            std::cout << "You have been locked out of this program";
            std::exit(EXIT_FAILURE);
        }
    }
}
