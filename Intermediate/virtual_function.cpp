
#include <iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
        cout<<"base display"<<endl;
    } 

    //virtual function is declared in base class and access by pointer variable
    virtual void show()
    {
        cout<<"base show"<<endl;
    }
};


class Derived:public Base 
{
    public:
    void display()
    {
        cout<<"derived display"<<endl;
    }

    void show()
    {
        cout<<"derived show"<<endl;
    }
};
int main() {
    Base *bptr;
    Base b;
    Derived d;
    bptr=&b;
    bptr->display();
    bptr->show();
    bptr=&d;
    bptr->display();
    bptr->show();
    return 0;
}