#include <fstream>
#include <iostream>
#include <string>
#include "write_read_files.h"

/**
 * The file responsible for reading and writing data.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
 \date 31.03.2016
**/

int file_exist (std::string name)
{
	std::ifstream file;
	file.open (name, std::ios_base::in | std::ios_base::ate);
	
	if (!file.is_open())
	{
		//file does not exist
		return 0;
	}
	else if (!file.tellg())
	{
		//file is empty
		file.close();
		return 2;
	}
	else
	{
		//file isn't empty
		file.seekg (0, std::ios::beg); //reload file from the beginning
		file.close ();
		return 1;
	}
};

std::fstream open_the_file_for_writing ()
{
	std::fstream file;
	std::string choice;
	
	for (int i=0; i<1; )
	{
		std::cout << "\nPlease write the name of the output file for writing (with extension):\n";
		//clean the keyboard buffer
		std::cin.clear();
		std::cin.sync();
		std::cin >> choice;
		if (file_exist (choice) == 1)
		{
			std::cout << "The file already contains data.\n\n";
			system ("pause");
		}
		else
		{
			file.open(choice, std::ios_base::out | std::ios_base::trunc);
			i++;
		}
	}
	return file;
};

std::fstream open_the_file_for_reading ()
{
	std::fstream file;
	std::string choice;
	
	for (int i=0; i<1; )
	{
		std::cout << "Please write the name of the input file for writing (with extension)):\n";
		//clean the keyboard buffer
		std::cin.clear();
		std::cin.sync();
		std::cin >> choice;
		if (file_exist (choice) == 2)
		{
			std::cout << "The file is empty.\n\n";
			system ("pause");
		}
		else if (file_exist (choice) == 0)
		{
			std::cout << "The file doesn't exist.\n\n";
			system ("pause");
		}
		else
		{
			file.open (choice, std::ios::in);
			i++;
		}
	}
	return file;
};