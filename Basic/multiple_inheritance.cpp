//Multiple inheritance: A derived class is derived from no. of multiple base class

#include <iostream>
using namespace std;
//base class
class num1
{
    protected:
    int n1;

    public:
    void inputn1(int a)
    {
        n1=a;
    }
};
//base class
class num2
{
    protected:
    int n2;

    public:
    void inputn2(int b)
    {
        n2=b;
    }
};
//derived class 
//syntax containg more than one base class
//class d.c name : public b.c name1, public b.c name2
class sum:public num1, public num2
{
    public:
    void display()
    {
        cout<<"sum="<<(n1+n2)<<endl;
    }
};
int main() {
    sum s;
    s.inputn1(3);
    s.inputn2(9);
    s.display();
    return 0;
}