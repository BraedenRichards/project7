/**
	JSON Communicator Main File
	Purpose: To be able to send and receive JSON information on a player class
	
	Written  by Braeden Richards
	Created: April 27th, 2017
*/

/**
	Main file is Dependent on:
*/


//Libraries
#include <iostream>
#include <fstream>
#include <string>


//Prototypes
void readInData(char fileName[], std::string* data);

/**
	Main file, runs the program.

	@param void
	@return 0
*/
int main(void)
{
	std::string test;
	readInData("PlayerStatistics.json", &test);

	std::cout << test << "\n";

	return 0;
}



/**
	Temprorary function that reads in the JSON data

	@param char array of the file name to open, string to read the data to
	@return void
*/
void readInData(char fileName[], std::string* data)
{
	std::ifstream inFile(fileName);

	if(inFile.is_open())
	{
		while(inFile.good())
		{
			std::string temp;
			inFile >> temp;
			*data += " " + temp;
		}
	}

	return;
}
