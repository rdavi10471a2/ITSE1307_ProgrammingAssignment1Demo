
#include "pyramid.h""

int main() 
{
	//declare and initialize 3 Pyramids
	Pyramid Pyramid1("Pyramid1",3);
	//Pyramid1.readFromConsole();  //Assignment 1 read from console assignemnt 2 you are supposed to initialize with constructor
	Pyramid1.outputToConsole();  //print info and call drawMe();

	Pyramid Pyramid2("Pyramid2", 6);
	//Pyramid2.readFromConsole();  //Assignment 1 read from console assignemnt 2 you are supposed to initialize with constructor
	Pyramid2.outputToConsole(); //print info and call drawMe();

	Pyramid Pyramid3("Pyramid3", 9);
	//Pyramid3.readFromConsole();  //Assignment 1 read from console assignemnt 2 you are supposed to initialize with constructor
	Pyramid3.outputToConsole();  //print info and call drawMe();

	//psuedocode for assignment 2
	/*
	int menuchoice = -1;
	do
	{
		//display menu using cout
		//read user input choice
		//choose shape to print using switch see instructor GITHUB for example of making a menu and using switch statment
	
	} while (menuchoice != 0);
	*/
}