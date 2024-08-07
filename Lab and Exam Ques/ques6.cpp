#include <iostream>
using namespace std;

class base {
public:
  void show()
   {
     cout << "Base display without argument"<<endl;
      }

  void show(int x) 
  {
    cout << "Base display with argument"<<endl;
  }

  virtual void display() 
  { 
    cout << " base class display"<<endl;
   };
};

class derived : public base 
{
public:
  void display() 
  {
     cout <<"derived display via runtime"<<endl; 
     }
};

int main() {
  base b, *bptr;
  derived d;

  bptr = &b;
  bptr->show();
  bptr->show(3);

  bptr = &d;
  bptr->display();

  return 0;
}