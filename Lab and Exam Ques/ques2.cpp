//swap the variables of two classes using friend function
#include <iostream>

using namespace std;
class Second;
class First
{
    private:
    int num1;

    public:
    First( int n)
    {
        num1 = n;
    }

    friend int Swap( First ,Second );
};
class Second
{
    private:
    int num2;

    public:
    Second(int m)
    {
        num2 = m;
    }

    friend int Swap(First ,Second );
};

 Swap (First obj1,Second obj2)
{
    cout<<"Before swapping ="<<obj1.num1<<","<<obj2.num2<<endl;
     int temp = obj1.num1; 
     obj1.num1 = obj2.num2; 
     obj2.num2 = temp; 
     cout<<"After swapping ="<<obj1.num1<<","<<obj2.num2<<endl;
}



int main() {
    First f(4);
    Second s(5);
    cout<<Swap( f,s);
    return 0;
}