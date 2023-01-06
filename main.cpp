#include <iostream>
#include <fstream>
#include "file.h"
#include "user.h"

class RegistedInfo : public FileManagement::File
{

};

class MenuFile : public FileManagement::File
{

};

void userRegister(RegistedInfo &registed_file)
{
	registed_file.writeToFile(SignUp::userRegister());
}

void userLogin(RegistedInfo& registed_file, bool &is_signed_in)
{
	std::string user_data = registed_file.getFileContent();
	is_signed_in = SignIn::isLoginCorrect(SignIn::userLogin(), user_data);
}

std::string getMenuInfomation(MenuFile& menu_file)
{
	std::string menu_infomation{ menu_file.getFileContent() };
	return menu_infomation;
}

void printMenu(MenuFile& menu_file)
{
	std::cout << "STT\tFood Name\tPrice\n";
	std::string menu_data = menu_file.getFileContent();

}

int main()
{
	RegistedInfo registed_file;
	registed_file.getFileName("RegisteredInfo.txt");
	MenuFile menu_file;
	menu_file.getFileName("Menu.txt");
	return 0;
}
