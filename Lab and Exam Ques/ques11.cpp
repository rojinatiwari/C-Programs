#include <iostream>
using namespace std;
template<class T1, class T2>
class Swap
{
    private:
    T1 a;
    T2 b;

    public:
     Swap(T1 x , T2 y)
    {
        a=x;b=y;
        cout<<"Before swapping =  "<<a <<","<<b<<endl;
    }

void display() 
{ 
    T1 temp = a; 
    // a = b; // float assigned to int
    T2 a = b; // a is now of T2 type i.e float ( float assigned to float)
    b =  temp; 

    cout<<"After swapping = "<<a<<","<<b<<endl;
} 

};

int main()
 {
    Swap <int ,float>s1(3,6.4);

    s1.display();
    return 0;
}