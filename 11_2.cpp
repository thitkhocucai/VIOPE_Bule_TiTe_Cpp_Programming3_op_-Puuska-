/*
Write a program that reads integers from a file and prints their sum on screen. Follow the format of the example print.
Every number is in it's individual row in the file. The sum of numbers is written as the last number in the file.
The name of the file is numbers.txt. If the program fails to open the file, it prints �Failed to open file!� on screen.
After this the program execution ends.
For example, if the contents of numbers.txt is at first:

1
2

, after executing the program it is:

1
2
3

The numbers that are already in the file when the program is executed, are summed together and the sum is added to the end of the file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    char file_name[] = "students.txt";
    string full_name;
    char school_class;
    file.open(file_name, ios_base::in);
    if (!file.is_open()) {
        cout << "Failed to open file!";
        return -1;
    }
    while (file >> school_class && getline(file, full_name)) {
        //remove first space character
        full_name=full_name.substr(1, full_name.length()-1);

        cout << full_name << ": class " << school_class << endl;
    }
    file.close();
}