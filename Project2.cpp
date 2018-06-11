//Daniel Diaz Santiago
//COP2000.051
//This program is a basic word game, it asks the user some questions and outputs a story using the answers.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, city, college, prof, animal, petn;
	int age;

	// Questions (user input)
	cout << "What is your first name? ";
	cin.sync();
	getline(cin, name);

	cout << "How old are you? ";
	cin.sync();
	cin >> age;
	cin.ignore(); // To prevent the program from printing out the next 2 questions in the same line.

	cout << "Where are you currently living? ";
	cin.sync();
	getline(cin, city);

	cout << "What's the name of your college? ";
	cin.sync();
	getline(cin, college);

	cout << "What is your current and/or future profession? ";
	cin.sync();
	getline(cin, prof);

	cout << "What type of animal is your pet (leave blank if none)? ";
	cin.sync();
	getline(cin, animal);

	cout << "and what is her/his name (leave blank if not applicable)? ";
	cin.sync();
	getline(cin, petn);

	//Print output if the user doesn't have a pet.
	if (petn.empty() || animal.empty())
	{
		cout << "\nThere once was a person named " << name << " who lived in " << city
			<< ".  At the age of " << age << ", " << name << " went to college at " << college
			<< ".  " << name << " graduated and went to work as a " << prof << ".  Unfortunately, " << name
			<< " did not adopt an animal. " << "Nevertheless, he lived happily ever after!\n\n" << endl;
	}

	//Print output if the user has a pet.
	else
	{
		cout << "\nThere once was a person named " << name << " who lived in " << city
			<< ".  At the age of " << age << ", " << name << " went to college at " << college
			<< ".  " << name << " graduated and went to work as a " << prof << ".  Then, " << name
			<< " adopted a(n) " << animal << " named " << petn << ".  They both lived happily ever after!\n\n" << endl;
	}

	return 0;
}
