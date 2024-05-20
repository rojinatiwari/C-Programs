#include <iostream>

using namespace std;
class number
{
    
    protected :// to avoid private members inheritable 
    int n1, n2;

    public:
    void input( int a, int b)
    {
        n1=a;
        n2=b;
    }
};


class product : public number
{
    public:
    void display()
    {
        cout<<"product="<<(n1*n2)<<endl;
    }
};
int main() {
    product p;
    p.input(5,6);
    p.display();
    return 0;
}