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
    // number of spaces
    int k = 2 * side - 2;
    int n = side;

    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++) {

        // Inner loop to handle number spaces
        // values changing acc. to requirement
        for (int j = 0; j < k; j++)
            cout << " ";

        // Decrementing k after each loop
        k = k - 1;

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++) {
            // Printing stars
            cout << "* ";  //space is important
        }

        // Ending line after each row
        cout << endl;
    }
}
void Pyramid::outputToConsole()
{
	cout << endl;
	cout <<fixed<<setprecision(3)<< "Pyramid " << name << " with side " << side << " Area: " << getArea() << " Perimiter:" << getPerimiter()<< endl<<endl;
    drawMe();
    cout << endl<<endl;
}