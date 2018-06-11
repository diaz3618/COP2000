// Daniel Diaz Santiago
// COP2000.051
// This program asks the user for the radius of a circle and outputs the radius, area, circumference, and diameter of that circle.

#include <iostream>
#include <iomanip>
using namespace std;

bool validate(double&);  // Validation function prototype

class Circle
{
private:
	const double PI = 3.14159;
	double radius;

public:
	Circle()
	{
		radius = 0.0;
	}

	Circle(double radius)
	{
		this -> radius = radius;
	}

	void setRadius(double radius)
	{
		this -> radius = radius;
	}

	double getRadius()
	{
		return radius;
	}

	double getArea()
	{
		return PI * radius * radius;
	}

	double getDiameter()
	{
		return radius * 2;
	}

	double getCircumfrence()
	{
		return 2 * PI * radius;
	}

	double displayData()
	{
		cout << "\nRadius: " << fixed << setprecision(2) << radius <<
				"\nArea: " << fixed << setprecision(2) << getArea() <<
				"\nCircumference: " << fixed << setprecision(2) << getCircumfrence() <<
				"\nDiameter: " << fixed << setprecision(2) << getDiameter() << endl;
		return 0;
	}

};


int main()
{
	double circle;
	Circle Circle(0.0);

	// Input the radius
	cout << "Radius of circle: ";
	cin >> circle;
	cin.sync();

	if (validate(circle) == false) return 99;  // Validation

	Circle.setRadius(circle);
	Circle.displayData();  // Display radius, area, circumference, and diameter

	return 0;
}

bool validate(double& num)
{
	if (!cin || num <= 0)
	{
		cout << "\n\nInvalid entry\nExiting..." << endl;
		return false;
	}
	else
	{
		return true;
	}
}