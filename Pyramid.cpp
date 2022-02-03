#include "pyramid.h"
#include <iomanip>

Pyramid::Pyramid() {
	name = "DefaultPyramid";
	side = 1;
}
Pyramid::Pyramid(string nameIn, int sideIn)
{
	name = nameIn;
	side = sideIn;
}
double Pyramid::getArea() {
	return sqrt(3) / 4.0 * ((double)side * (double)side);
};

int Pyramid::getPerimiter() { return 3 * side; };


string Pyramid::getName() { return name; }
void Pyramid::setName(string nameIn) { name = nameIn; }

int Pyramid::getSide() { return side; }
void Pyramid::setSide(int sideIn) { side = sideIn; }


void Pyramid::readFromConsole() {
	cout << " Input Name For Pyramid " << endl;
	cin >> name;
	cout << " Input integer for side" << endl;
	cin >> side;

}


void Pyramid::drawMe()
{
	cout << "Programming Assignment 2 will do this we hope " << endl;
}
void Pyramid::outputToConsole()
{
	cout << endl;
	cout <<fixed<<setprecision(3)<< "Pyramid " << name << " with side " << side << " Area: " << getArea() << " Perimiter:" << getPerimiter()<< endl<<endl;
}