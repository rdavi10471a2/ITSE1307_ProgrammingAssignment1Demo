#pragma once
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Pyramid
{
	private:
		string name;
		int base;
	public:
		Pyramid();
		Pyramid(string nameIn, int baseIn);
		string getName();
		void setName(string nameIn);
		int getBase();
		void setBase(int baseIn);
		void readFromConsole();
		void outputToConsole();
		void drawMe();  //assignment2
		double getArea();
		int  getPerimiter();
		
		
};

