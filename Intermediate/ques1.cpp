//WAP to swap the variables of two classes using friend function
#include <iostream>
using namespace std;
class Class2; //Forward declaration
class Class1
{
  private:
    string data= "I am from Class1";
  public:
    friend void swapper(Class1 &, Class2 &);
};
class Class2
{
  private:
string data= "I am from Class2";
  public:
    friend void swapper(Class1 &, Class2 &);
};
void swapper(Class1& obj1, Class2& obj2)
{
  string temp;
  temp = obj1.data;
  obj1.data = obj2.data;
  obj2.data = temp;
   cout << "Class 1 says: " << obj1.data << endl;
  cout << "Class 2 says: " << obj2.data << endl;
}

int main()
{
  Class1 c1;
  Class2 c2;
  swapper(c1, c2);
}