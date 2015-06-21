/* Write a program that asks the users gender and age.
Finally the program prints a sentence based on the following rule:
* Male 0-55 years: "You are a man in his prime!"
* Male 56-100 years: "You are a wise man!"
* Female 0-55 years: "You are like a blooming flower!"
* Female 56-100 years: "You look young for your age!"
* Else "Error encountered!"
Age is handled as an integer variable and gender
as string variable (m/f). Letter case is ignored.
Tip:
Use enough time to plan for the program before starting to code.
Example print
Are you a male or a female (m/f): m
Your age: 44
You are a man in his prime! */

#include <iostream>

using namespace std;

int main()
{
    char gender;
    int age;
    cout << "Are you a male or a female (m/f):";
    cin >> gender;
    cout << "Your age:";
    cin >> age;
    switch (gender)
    {
        case 'm': case 'M':
        {
                if (age >= 0 && age < 56) {
                    cout << "You are a man in his prime!" << endl;
                    break;
                }
                else if (age >= 56 && age < 101) {
                    cout << "You are a wise man!" << endl;
                    break;
                }
        }
        case 'f': case 'F':
            {

                if (age >= 0 && age < 56) {
                    cout << "You are like a blooming flower!" << endl;
                    break;
                }
                else if (age >= 56 && age < 101) {
                    cout << "You look young for your age!" << endl;
                    break;
                }
            }
        default:
            cout << "Error encountered!" << endl;
    }
}
