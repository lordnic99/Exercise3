#include "iostream"
#include "account.h"
#include <string>

std::string Account::getString()
{
	std::string string_to_get{};
	std::getline(std::cin, string_to_get);
	return string_to_get;
}

bool Account::isLegal(std::string user_name)
{
    for (std::size_t i = 0; i < user_name.length(); i++)
    {
        if ((str[i] >= 48 && str[i] <= 57) ||
            (str[i] >= 65 && str[i] <= 90) ||
            (str[i] >= 97 && str[i] <= 122))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void Account::registerAccount()
{
    do
    {
        std::cout << "Allow number and alphabet characters only!";
        std::cout << "Enter username: ";
        this->user_name = getString();
    } while (!isLegal(user_name));
    std::cout << "Enter password: ";
    this->password = getString();
    isLoginSuccess = true;
    return;
}

void Account::loginAccount()
{
	std::cout << "Enter username: ";
    this->user_name = getString();
    std::cout << "Enter password: ";
    this->password = getString();
}


