/*
Write a program that asks for student's exam grades (integers 4-10)
and prints the average of the given numbers.
Program receives numbers until input is finished by inputting a
negative number. Finally the program prints the amount of grades and their average.
*/

#include<iostream>
using namespace std;

int main()
{
  int input, grades_total = 0, num_of_grade = 0;

  cout << "Program calculates the test grade average.\n"
"Finish inputting with a negative number.\n";
  while (true)
  {
      cout << "Input grade (4-10)";
      cin >> input;
      if (input < 0) {
        break;
      }
      if (input >= 4 && input <= 10) {
        grades_total += input;
        num_of_grade++;
      }
  };
  cout << "You inputted " << num_of_grade << " grades " << endl;
  cout << "Grade average:" << (float) grades_total / num_of_grade << endl;
}
