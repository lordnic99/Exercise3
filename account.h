#ifndef ACCOUNT_H_

#define ACCOUNT_H_

#include <string>

class Account
{
public:
	Account() : user_name(""), password("") {};
	void loginAccount();
	void registerAccount();
private:
	std::string user_name{};
	std::string password{};
	bool isLegal(std::string user_name);
	std::string getString();
	bool isLoginSuccess{ false };
};

#endif // !ACCOUNT_H_

