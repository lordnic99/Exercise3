#include "file.h"
#include <fstream>

std::fstream File::openFileInReadMode() const
{
	std::fstream file_to_read;
	file_to_read.open(this->fileName, std::ios::in);
	if (!file_to_read.is_open())
	{
		std::cerr << "File open failed! Exiting....!\n";
		exit(1);
	}
	return file_to_read;
}

std::fstream File::openFileInWriteMode() const
{
	std::fstream file_to_write;
	file_to_write.open(this->fileName, std::ios::out);
	if (!file_to_write.is_open())
	{
		std::cerr << "File open failed! Exiting....!\n";
		exit(1);
	}
	return file_to_write;
}

std::fstream File::openFileInAppendMode() const
{
	std::fstream file_to_append;
	file_to_append.open(this->fileName, std::ios::app);
	if (!file_to_append.is_open())
	{
		std::cerr << "File open failed! Exiting....!\n";
		exit(1);
	}
	return file_to_append;
}
void File::getFileName(std::string new_name)
{
	this->fileName = new_name;
	return;
}
void File::createNewFile() const
{
	std::fstream new_file = openFileInWriteMode();
	new_file.close();
	return;
}

std::string File::getFileContent() const
{
	std::fstream file_to_get = openFileInReadMode();
	std::string file_data = "";
	while (!file_to_get.eof())
	{
		std::string line{};
		std::getline(file_to_get, line);
		line = line + '\n';
		file_data = file_data + line;
	}
	file_to_get.close();
	file_data.pop_back();
	return file_data;
}

void File::writeToFile(std::string line_to_write) const
{
	std::fstream file_to_write = openFileInAppendMode();
	file_to_write << line_to_write;
	file_to_write.close();
	return;
}
