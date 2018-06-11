// Daniel Diaz Santiago
// COP2000.051
// This program asks the user for the length and width of a rectangle and calculates the area

#include <iostream>
using namespace std;

// Prototypes
double getLength();
double getWidth();
double getArea(double&, double&);
void displayData(double&, double&, double&);
bool validate(double&);

int main()
{
	cout << "To find the are of a rectangle, enter the length and width.\n" << endl;

	double length = getLength();
	double width = getWidth();
	double area = length * width;

	if (validate(length) == false || validate(width) == false) return 99;  // Validation

	displayData(length, width, area);  // Display data
	
	return 0;
}

double getLength()
{
	double length;

	cout << "Length: ";
	cin >> length;

	return length;
}

double getWidth()
{
	double width;

	cout << "Width: ";
	cin >> width;

	return width;
}

double getArea(double& length, double& width)
{
	return length * width;
}

void displayData(double& width, double& length, double& area)
{
	cout << "\n\nThe area of a " << length << "ft x " << width <<"ft rectangle is " << area << "sq ft" << endl;
}

bool validate(double& num)
{
	if (!cin || num <= 0)
	{
		cout << "\n\nInvalid entry" << endl;
		return false;
	}
	else
	{
		return true;
	}
}