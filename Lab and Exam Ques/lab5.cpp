#include <iostream>
using namespace std;
class Base{
    protected:
    int num1,num2;

    public:
    void input(int a, int b){
        num1=a;num2=b;
    } 
};

class Derived:public Base
{
    public:
    void display()
    {
        cout<<"sum ="<<num1+num2<<endl;
    }
};

int main() {
    Derived d;
    d.input(3,4);
    d.display();
    return 0;
}