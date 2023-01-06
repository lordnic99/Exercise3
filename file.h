#ifndef _FILE_H

#define _FILE_H
#include <iostream>
#include <string>

class File
{
public:
	File(std::string file_Name) : fileName(file_Name) {};
	File() : fileName("") {};
	void getFileName(std::string new_name);
	void createNewFile() const;
	std::string getFileContent() const;
	void writeToFile(std::string line_to_write) const;
private:
	std::string fileName;
	std::fstream openFileInWriteMode() const;
	std::fstream openFileInReadMode() const;
	std::fstream openFileInAppendMode() const;
};

#endif // !_FILE_H

