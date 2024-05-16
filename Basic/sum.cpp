#include <iostream>

using namespace std;
class sum
{
    private:
    
int num1,num2;

    public:
     
    void input( int a, int b);
    void display ();
};
    
    void sum :: input(int a, int b)
    {
        num1= a; num2=b;

    }

    void sum :: display()
    {
        int s;
        s=(num1+num2);
        cout<<"sum is"<<s;


    }

int main() {
     sum obj;
     obj.input( 4, 5);
     obj.display();
    return 0;
}