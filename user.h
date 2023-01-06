#ifndef _USER_H_

#define _USER_H_

#include <string>

namespace SignUp
{
	std::string getUserName();
	std::string getPassword();
	std::string userRegister();
	bool userNameChecked(std::string user_name);
}

namespace SignIn
{
	std::string getUserName();
	std::string getPassword();
	std::string userLogin();
	bool isLoginCorrect(std::string login_info, std::string user_data);
}

#endif // !_USER_H_

