#include "user.h"
#include <iostream>

bool SignUp::userNameChecked(std::string user_name)
{
    for (int i = 0; i < user_name.length(); i++)
    {
        if ((user_name[i] >= 48 && user_name[i] <= 57) ||
            (user_name[i] >= 65 && user_name[i] <= 90) ||
            (user_name[i] >= 97 && user_name[i] <= 122))
        {
            continue;
        }
        else
        {
            return true;
        }
    }
    return false;
}
std::string SignUp::getUserName()
{
	std::string user_name{};
    do
    {
        std::cout << "Accept number and character only!\n";
        std::cout << "Enter you username: ";
        fflush(stdin);
        std::getline(std::cin, user_name);
    } while (userNameChecked(user_name));
    return user_name;
}

std::string SignUp::getPassword()
{
    std::string password{};
    std::cout << "Enter you password: ";
    fflush(stdin);
    std::getline(std::cin, password);
    return password;
}

std::string SignUp::userRegister()
{
    std::string user_name = getUserName();
    std::string password = getPassword();
    std::string register_info = user_name + ':' + password + '\n';
    return register_info;
}

std::string SignIn::getUserName()
{
    std::string user_name{};
    std::cout << "Enter you username: ";
    fflush(stdin);
    std::getline(std::cin, user_name);
    return user_name;
}

std::string SignIn::getPassword()
{
    std::string password{};
    std::cout << "Enter you password: ";
    fflush(stdin);
    std::getline(std::cin, password);
    return password;
}

bool SignIn::isLoginCorrect(std::string login_info, std::string user_data)
{
    auto is_correct = user_data.find(login_info);
    if (is_correct == std::string::npos)
    {
        return false;
    }
    return true;
}

std::string SignIn::userLogin()
{
    std::string user_name = getUserName();
    std::string password = getPassword();
    std::string sign_in_info = user_name + ':' + password;
    return sign_in_info;
}
