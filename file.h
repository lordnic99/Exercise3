#ifndef _FILE_H

#define _FILE_H
#include <iostream>
#include <string>

namespace FileManagement
{
	class File
	{
	public:
		File(std::string file_Name) : fileName(file_Name) {};
		File() : fileName("") {};
		void getFileName(std::string new_name);
		void createNewFile();
		std::string getFileContent();
		void writeToFile(std::string line_to_write);
	private:
		std::string fileName;
		std::fstream openFileInWriteMode();
		std::fstream openFileInReadMode();
		std::fstream openFileInAppendMode();
	};
}
#endif // !_FILE_H

