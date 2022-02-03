#pragma once
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Pyramid
{
	private:
		string name;
		int side;
	public:
		Pyramid();
		Pyramid(string nameIn, int baseIn);
		string getName();
		void setName(string nameIn);
		int getSide();
		void setSide(int baseIn);
		void readFromConsole();
		void outputToConsole();
		void drawMe();  //assignment2
		double getArea();
		int  getPerimiter();
		
		
};

