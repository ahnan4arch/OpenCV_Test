#include <string>
#include <vector>
#include <iostream>
#include "directory.hpp"
#include "test_directory.hpp"

int test_directory_GetListFiles()
{
	fbc::Directory dir;

	std::string path = "E:/GitCode/OpenCV_Test/test_images";
	std::string exten = "*.jpg"; //"*";
	bool addPath = false; //true;

	// 遍历指定文件夹下的所有文件，不包括指定文件夹内的文件夹
	std::vector<std::string> filenames = dir.GetListFiles(path, exten, addPath);

	std::cout << "file names: " << std::endl;
	for (int i = 0; i < filenames.size(); i++)
		std::cout <<"    "<< filenames[i] << std::endl;

	return 0;
}

int test_directory_GetListFilesR()
{
	fbc::Directory dir;

	std::string path = "E:/GitCode/OpenCV_Test/test_images";
	std::string exten = "*";
	bool addPath = true; //false

	// 遍历指定文件夹下的所有文件，包括指定文件夹内的文件夹
	std::vector<std::string> allfilenames = dir.GetListFilesR(path, exten, addPath);

	std::cout << "all file names: " << std::endl;
	for (int i = 0; i < allfilenames.size(); i++)
		std::cout <<"    "<< allfilenames[i] << std::endl;

	return 0;
}

int test_directory_GetListFolders()
{
	fbc::Directory dir;

	std::string path = "E:/GitCode/OpenCV_Test/test_images";
	std::string exten = "*d*"; //"*"
	bool addPath = false; //true

	// 遍历指定文件夹下的所有文件夹，不包括指定文件夹下的文件
	std::vector<std::string> foldernames = dir.GetListFolders(path, exten, addPath);

	std::cout << "folder names: " << std::endl;
	for (int i = 0; i < foldernames.size(); i++)
		std::cout << "    "<< foldernames[i] << std::endl;

	return 0;
}

