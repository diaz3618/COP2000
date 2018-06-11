// Daniel Diaz Santiago
// COP2000.051
// This program sorts inches of snow (info. given by user) for each day during a 7 day period.

#include <iostream>
using namespace std;

// Constants
const int BASE = 7;
const int DATE = 7;

// Prototypes
void sortArray(double [], int, int[], int);
void showArray(double [], int, int[], int);
void showDate(int [], int);
bool validate(int);


class Data
{
public:
    string month;
    int sDate = 0;
    int eDate = 0;
    double snowAmount[BASE];
    int showDay[DATE];

    // Prototype
    void IO(); // Input-Output
};


int main()
{
    Data data;  // Create object
	data.IO();  // Run Input-Output function


	data.showDay[0] = data.sDate;
	data.showDay[1] = data.sDate + 1;
	data.showDay[2] = data.sDate + 2;
	data.showDay[3] = data.sDate + 3;
	data.showDay[4] = data.sDate + 4;
	data.showDay[5] = data.sDate + 5;
	data.showDay[6] = data.sDate + 6;


	sortArray(data.snowAmount, BASE, data.showDay, DATE);
	cout << "\nSnow Report " << data.month << " " << data.sDate << " - " << data.eDate << "\n";
	showArray(data.snowAmount, BASE, data.showDay, DATE);

	return 0;
}

// Sort array algorithm
void sortArray(double array[], int size, int day[], int sizeDay)
{
	 double tmp;
	 bool swap;
	 int tmp2;

	 do
	 {
	     swap = false;
	     for (int count = 0; count < size - 1; count++)
		 {
			  if (array[count] > array [count + 1])
			  {
				 tmp = array[count];
				 tmp2 = day[count];
				 array[count] = array[count + 1];
				 day[count] = day[count +1];
				 array[count + 1] = tmp;
				 day[count + 1] = tmp2;
				 swap = true;
			  }
		 }
	 }

	 while(swap);
}

// Output array
void showArray(double array[], int size, int day[], int sizeDay)
{
    cout << "\tDate:\tBase:\n";
    for (int count = 0; count < size; count++)
        cout << "\t" << day[count] << "\t" <<  array[count] << " " << endl;
}

void Data::IO()
{
    // Name of the month and dates
    cout << "Name of Month: ";      cin >> month;
	cout << "Starting date of the 7 day period(1-7): ";     cin >> sDate;
	cout << "Ending date of the 7 day period(1-7): ";       cin >> eDate;

	// Validate input
	if (validate(eDate) == true || validate(sDate == true))
    {
        while (eDate != sDate +6)  // Verify that the period of days entered add up to 7
        {
            cout << "Not a 7 day period." << endl;
            cout << "Starting date of the 7 day period(1-7): ";     cin >> sDate;
            cout << "Ending date of the 7 day period(1-7): ";       cin >> eDate;
        }
    }

    else
    {
        terminate();
    }


    // Depth of snow per day
	cout << "\nEnter the " << BASE << " base snow depths" << endl;
	cout << "Day " << sDate << ": ";        cin >> snowAmount[0];
	cout << "Day " << sDate + 1 << ": ";    cin >> snowAmount[1];
	cout << "Day " << sDate + 2 << ": ";    cin >> snowAmount[2];
	cout << "Day " << sDate + 3 << ": ";    cin >> snowAmount[3];
	cout << "Day " << sDate + 4 << ": ";    cin >> snowAmount[4];
	cout << "Day " << sDate + 5 << ": ";    cin >> snowAmount[5];
	cout << "Day " << sDate + 6 << ": ";    cin >> snowAmount[6];
}

bool validate(int num)
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
