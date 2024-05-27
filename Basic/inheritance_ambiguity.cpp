// Ambiguity ( same function may contain more than one base class)



#include <iostream>
using namespace std;
//Base class
class num1
{
    protected:
    int n1;

    public:
    void input(int a)
    {
        n1=a;
    }
};

//Base class
class num2
{
    protected:
    int n2;

    public:
    void input(int b)
    {
        n2=b;
    }
};

//Derived class
//syntax containg more than one base class
//class d.c name : public b.c name1, public b.c name2

class sum: public num1, public num2
{
    public:
    void display()
    {
        cout<<"sum="<<(n1+n2)<<endl;

    }

};


// To remove ambiguity in multiple inheritance we use below syntax while calling a member function
//syntax
// obj-name .class-name :: func-name (arg)

int main() {
    sum s;
    s.num1::input(8);
    s.num2::input(9);
    s .display();
    return 0;
}