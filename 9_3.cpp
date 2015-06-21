/* In the exercise both the main program and the class "Calculator" have been completed.
Your task is to make up class "Printer" that asks the user for two integers,
calls for the class "Calculator" method "Sum()" transferring the integers received
as input to the method. Method "Sum()" calculates the sum of the integers and returns the result.
At the end method "Print()" prints the given sum on screen. */

#include <iostream>
using namespace std;

class Calculator
{
  public:

  int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
  int sum =first + second;
  return sum;
}

// your code
class Printer
{
public:
    void Print();
};

void Printer::Print()
{
    int num1, num2;
    cout << "Give a first integer: ";
    cin >> num1;
    cout << "Give a second integer: ";
    cin >> num2;
    Calculator adder;
    cout << "Sum: " << adder.Sum(num1, num2) << endl;
}

int main()
{
  Printer object;
  object.Print();
}
