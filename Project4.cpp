// Daniel Diaz Santiago
// COP2000.051
/*	This program opens a file (Random.txt), tells the user the amount of numbers in the file, 
	the sum of all those numbers, and the average of all numbers in the file. */

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int number, totalNumbers = 0;
	double average, total = 0;
	ifstream inputFile;

	inputFile.open("Random.txt");	// Open "Random.txt"

	// If file isn't found or any other error occurs
	if (!inputFile)
	{
		cout << "Error, file \"Random.txt\" not found\n";
		return 99;
	}

	else
	{
		cout << "Numbers in file \"Random.txt\":\n" << endl;

		while (inputFile >> number)
		{
			cout << number << endl;
			totalNumbers++;
			total += number;
			average = total / totalNumbers;
		}

	}

	inputFile.close();	// Close "Random.txt"


	cout << "\n\nThere are " << totalNumbers << " numbers in file \"Random.txt\"" << endl;				// Amount of numbers in "Random.txt"
	cout << "The sum of all numbers in \"Random.txt\" is: " << total << endl;							// Adds all numbers in "Random.txt"
	cout << "The average of all numbers in \"Random.txt\" is: " << setprecision(5) << average << endl;	// Average of all the numbers in "Random.txt"

	return 0;
}
