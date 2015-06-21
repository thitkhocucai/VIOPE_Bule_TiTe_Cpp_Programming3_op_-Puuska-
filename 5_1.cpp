/* Write a program that asks user for an integer and checks if the number is even or odd.
If the number is even, program prints ¡°Number X is even.¡± and if it is odd,
 program prints ¡°Number X is odd.¡±. X marks the inputted number. */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Input an integer:";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number " << num << " is even." << endl;
    } else {
        cout << "The number " << num << " is odd." << endl;
    }
}
