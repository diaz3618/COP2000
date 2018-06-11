// Daniel Diaz Santiago
// COP2000.051
// This program calculates the user's BMI using their weight and height and tells them is they're underweight, heealthy, overweight or obese.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	float height, weight, bmi;

	cout << "Body Mass Index (BMI) Calculator\n\n";

	cout << "Enter your height (in inches): ";	// Asks for user to input height in inches
	cin.sync();
	cin >> height;

	cout << "Enter your weight (in pounds): ";	// Asks for user to input weight in pounds
	cin.sync();
	cin >> weight;


	// Calculates BMI (BMI variable)

	bmi = weight / (pow(height, 2)) * 703;
	cout << "\n\nYour BMI is: " << setprecision(3) << bmi << endl;	// Outputs BMI with 1 number after the decimal point.


	// Underweight, normal, overweight, obese.

	if (bmi < 18.5)	// A BMI that is less than 18.5 is considered underweight.
	{
		cout << "Underweight\n";
	}
	if (bmi >= 18.5 && bmi <= 24.9)	// 18.5 - 24.9 is normal/healthy weight.
	{
		cout << "Normal weight\n";
	}
	if (bmi >= 25 && bmi <= 29.9) // 25 - 29.9 is overweight.
	{
		cout << "Overweight\n";
	}
	if (bmi >= 30) // 30 and above is obese.
	{
		cout << "Obese\n";
	}

	return 0;
}