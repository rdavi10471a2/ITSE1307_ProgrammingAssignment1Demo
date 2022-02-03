#include "pyramid.h"
#include <iomanip>

Pyramid::Pyramid() {
	name = "DefaultPyramid";
	base = 1;
}
Pyramid::Pyramid(string nameIn, int baseIn)
{
	name = nameIn;
	base = baseIn;
}
double Pyramid::getArea() {
	return sqrt(3) / 4.0 * ((double)base * (double)base);
};

int Pyramid::getPerimiter() { return 3 * base; };


string Pyramid::getName() { return name; }
void Pyramid::setName(string nameIn) { name = nameIn; }

int Pyramid::getBase() { return base; }
void Pyramid::setBase(int baseIn) { base = baseIn; }


void Pyramid::readFromConsole() {
	cout << " Input Name " << endl;
	cin >> name;
	cout << " Input integer for base" << endl;
	cin >> base;

}


void Pyramid::drawMe()
{
	cout << "Programming Assignment 2 will do this we hope " << endl;
}
void Pyramid::outputToConsole()
{
	cout << endl;
	cout <<fixed<<setprecision(2)<< "Pyramid " << name << " with base " << base << " Area: " << getArea() << " Perimiter:" << getPerimiter()<< endl<<endl;
}