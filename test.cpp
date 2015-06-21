#include <iostream>

using namespace std;


class Human

{

    public:

      int age;

      int Changeage(int age);

      Human();

};

Human::Human()
{
  age = 0;
}

int Human::Changeage(int age)

{

  age = age;

  cout << "John is " << age << " years old." << endl;

  return age;

}


int main()

{

  int age = 20;

  Human John;

  age = John.Changeage(21);

  age++;

  cout << "John is " << age << " years old.";

}
