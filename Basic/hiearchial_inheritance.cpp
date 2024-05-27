//Hiearchial inheritance: A base class with no. of multiple of derived class

#include <iostream>
using namespace std;
//base class
class number{
    protected:
    int n1,n2;


    public:
    void input(int a , int b)
    {
        n1=a;n2=b;
    }
};

//derived class 

class sum : public number
{
    public:
    void display()
    {
        cout<<"sum="<<(n1+n2)<<endl;
    }
};

//derived class 
class prod : public number
{
    public:
    void display()
    {
        cout<<"product="<<(n1*n2)<<endl;
    }
};



int main() {
    sum s;
    s.input(3,4);
    s.display();

    prod p;
    p.input(5,6);
    p.display();
    return 0;
}