/*
Below program asks user for three integers
and prints the smallest and largest of those three on screen.
Your task is to write the missing functions (largest() and smallest ()), which receive the user input as parameters and return the largest and smallest integers, respectively.
*/

#include <iostream>

using namespace std;

int largest(int first, int second, int third);

int smallest(int first, int second, int third);

int main()


{

  int number1, number2, number3, largestnumber,smallestnumber;

  cout << "Input the first integer: ";

  cin >> number1;

  cout << "Input the second integer: ";

  cin >> number2;

  cout << "Input the third integer: ";

  cin >> number3;

  largestnumber = largest(number1, number2, number3);

 smallestnumber =smallest(number1, number2, number3);

  cout << "The largest number was " << largestnumber;

  cout << " and the smallest " <<smallestnumber << "." << endl;
}

int largest(int first, int second, int third)
{
    int array[] = {first, second, third};
    int i;
    int largest_so_far = array[0];
    for (i = 0; i < 3; i ++)
    {
        if (array[i] > largest_so_far) {
            largest_so_far = array[i];
        }
    }
    return largest_so_far;
}

int smallest(int first, int second, int third)
{
    int array[] = {first, second, third};
    int i;
    int smallest_so_far = array[0];
    for (i = 0; i < 3; i ++)
    {
        if (array[i] < smallest_so_far) {
            smallest_so_far = array[i];
        }
    }
    return smallest_so_far;
}
