#include <iostream>
using namespace std;
class Swap
{
    private:
    int a,b;

    public:
     void input(int x , int y)
    {
        a=x;b=y;
        cout<<"Before swapping "<<a <<","<<b<<endl;
    }

void display() 
{ 
    int temp = a; 
    a = b; 
    b = temp; 

    cout<<"After swapping ="<<a<<","<<b<<endl;
} 

};

int main()
 {
    Swap s;
    s.input(2,3);
    s.display();
    

    return 0;
}