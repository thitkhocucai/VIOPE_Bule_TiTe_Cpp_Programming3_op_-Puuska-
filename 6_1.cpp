#include<iostream>
using namespace std;

int main()
{
  int number = 0, input;
  cout << "Input an integer:";
  cin >> input;
  do
  {
    cout << ++number << endl;
  } while (number < input);
}

