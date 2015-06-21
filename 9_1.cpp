/* The below program creates an object called ¡°printer¡± in a class called
¡°PrintClass¡± and then uses the object to print text.
Your task is to write the class ¡°PrintClass¡± and the required method.
*/
#include <iostream>

using namespace std;

class PrintClass {
    public:
    void print(char str[]);
    PrintClass();
};

PrintClass::PrintClass()
{

}

void PrintClass::print(char str[])
{
    cout << str << endl;
}

int main()
{
  char charstring[50];
  cout << "Input a character string for printing:";
  cin.get(charstring, 50);
  PrintClass printer;
  printer.print(charstring);
}

