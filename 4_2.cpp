/*
Write a program that calculates the hypotenuse of an orthogonal
triangle based on the triangle legs inputted by the user.
The leg lengths are assumed to be integers and the hypotenuse
value is assigned into a double type variable.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int side1, side2;
    double hyp;
    cout << "Input first triangle leg:";
    cin >> side1;
    cout << "Input second triangle leg:";
    cin >> side2;
    hyp = sqrt(side1*side1 + side2*side2);
    cout << "Hypotenuse length: " << hyp << endl;
}
