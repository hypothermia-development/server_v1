#include "auth_core.h"
#include "file_mangement.h"




int file_manager()
{

	// authentication loop v1
	while (true)
	{
		if (hasAccess = true)
		{
		break;
		}
		

		doLogin(password, didLogin, num_of_attempts_login);
		onAttempt(num_of_attempts_login, didLogin)
	}


	while(true)
	{
		string eksla;
		std::cout << "Enter Command:"
		std::cin >> eksla
		if (eksla == "delete file")
		{
			string file_name;
			std::cout << "Name a file: ";
			std::cin << file_name;
			delete_file(file_name);
		}
		if (eksla == "create file")
		{
			std::cin << "not yet added";
		}
		else
		{
			std::cin << "that is not a cmd";
		}

		return 0;
	}

	return 1;
}
