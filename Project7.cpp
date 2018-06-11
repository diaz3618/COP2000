// Daniel Diaz Santiago
// COP2000.051
// Grades DMV driver's license exam
#include <iostream>
#include <fstream>
using namespace std;

class TestGrader
{
private:
   static const int SIZE = 20;
   char answers[SIZE];
   char student[SIZE];
   int count;

public:
   TestGrader();
   void setKey(char answers[SIZE]);
   void setStudent(char student[SIZE]);
   void grade(char answers[SIZE], char student[SIZE]);
};

TestGrader::TestGrader()
{
}

void TestGrader::setKey(char answers[SIZE])
{
    cout << "\n\n\nCorrect answers: \n";
   for (int count = 0; count < SIZE; count++)
   {
       cout << "\tCorrect answer " << count + 1 << ": " << answers[count] << endl;
   }
   return;
}

void TestGrader::setStudent(char student[SIZE])
{
   count = 0;
   char nextchar;
   static const int SIZE = 20;

   // Open file
   ifstream inputFile;
   inputFile.open("student.txt");
   if (!inputFile)
   {
       cout << "[-]Error opening file\n";
       terminate(); // Close program if file is not found
   }
   else
   {
       cout << "[+]File opened\nStudent answers:";
   }

   while (inputFile >> nextchar)
   {
       student[count] = nextchar;
       count++;
       cout << "\n\tStudent answer " << count << ": " << nextchar;
   }
   inputFile.close();

   return;
}

void TestGrader::grade(char answers[SIZE], char student[SIZE])
{
   int correct = 0;
   int incorrect = 0;

   // Fail of pass

   for (int count = 0; count < SIZE; count++)
   {
       answers[count] == student[count] ? correct++ : incorrect++;
   }
   // Fail of pass
   correct >= 15 ? cout << "\nThe student passed the exam.\n" : cout << "\nThe student failed the exam.\n";

    cout << "Number of right answers: " << correct << endl;
    cout << "Number of incorrect answers: " << incorrect << endl;

    for (int count = 0; count < SIZE; count++)
    {
        if (answers[count] != student[count])    cout << "\n\tQuestion " << (count +1) << " is incorrect.\n";
    }
   return;
}

int main()
{
   static const int SIZE = 20;
   TestGrader Test;

   char student[SIZE];

   // Correct answers
   char answers[SIZE] = { 'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', \
                        'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A' };


   Test.setStudent(student);
   Test.setKey(answers);
   Test.grade(answers, student);

   return 0;
}
