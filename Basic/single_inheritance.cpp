//single inheritance:A derived class with only one base class

#include <iostream>
using namespace std;
//base class
class number
{
    // To make the private members of base class inheriable,we use protected specifier in case of private specifier

    protected: //access to that class and also to it's sub-class
    int n1,n2;

    public:
    void input( int a, int b)
    {
        n1=a;n2=b;
    }
};
//derived class
// syntax
// class d.c name : access specifier b.c name
class sum:public number

{
    public:
    void display()
    {
        cout<<"sum="<<(n1+n2)<<endl;
    }
};



int main() {
    sum s;
    s.input(2,3);
    s.display();
    return 0;
}