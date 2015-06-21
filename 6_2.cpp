/*
Write a program that asks user for an integer n (n>0) and
prints the factorial of that number on screen.
Example: factorial of n is marked with n!, which means 1*2*3...n.
*/

#include<iostream>
using namespace std;

int main()
{
  int input, helper, factorial = 1;
  cout << "Input an integer:";
  cin >> input;
  helper = input;
  while (helper > 1)
  {
      factorial *= helper;
      helper--;
  };
  cout << "The factorial of number " << input << " is " << factorial << endl;
}
