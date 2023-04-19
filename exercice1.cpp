#include <iostream>

using namespace std;

class A{
public:
  void display ()
  {
    cout << "je suis la fille\n";
  }
};

class B : public A{
public:
  void display ()
  {
    cout << "je suis la mere\n";
  }
};

int main ()
{
  B b;
  b.display();
  return 0;
}