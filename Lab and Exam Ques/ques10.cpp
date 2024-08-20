//program to demonstrate single catch in cpp

#include <iostream>
using namespace std;

int main() {
    float a,b,div;
    try
    {
        cout<<"Enter value for a and b : ";
        cin>>a>>b;
        if (b==0) throw b;
        div=a/b;
        cout<<"div = "<<div<<endl;
    }
    catch(float e)
    {
        cout<<"Enter other than 0 for b"<<endl;
    }
    return 0;
}