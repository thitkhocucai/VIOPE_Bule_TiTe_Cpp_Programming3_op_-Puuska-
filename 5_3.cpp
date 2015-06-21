/* Enhance the previous calculator program so that the user can choose
which operation he wants to perform. The program first asks for the performed
calculation. After this the program asks for the integers, performs the
calculation and prints the result. Make the choice structure with switch() statement.
*/
#include <iostream>

using namespace std;

int main()
{
    int choice, num1, num2;
    cout << "Choose desired calculation:\n"
"1: subtraction\n"
"2: addition\n"
"3: multiplication\n"
"4: division\n"
"5: Remainder\n"
"Choose a calculation:";
    cin >> choice;
    cout << "Input first number:";
    cin >> num1;
    cout << "Input second number:";
    cin >> num2;
    switch (choice)
    {
        case 1:
            {
                cout << num1 << "-" << num2 << " = " << num1-num2 << endl;
                break;
            }

        case 2:
            {
                cout << num1 << "+" << num2 << " = " << num1+num2 << endl;
                break;
            }

        case 3:
            {
                cout << num1 << "*" << num2 << " = " << num1*num2 << endl;
                break;
            }
        case 4:
            {
                cout << num1 << "/" << num2 << " = " << (double) num1/num2 << endl;
                break;
            }
        case 5:
            {
                cout << "Remainder:" << num1%num2 << endl;
                break;
            }
    }
}
