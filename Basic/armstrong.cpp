#include <iostream>

using namespace std;
class number
{
    protected:
    int n;

    public:
    void input (int a)
    {
        n=a;
    }
};

class armst: public number
{
    public:
    void display()
    {
        int sum=0,org,ext;
        org=n;
        while(n!=0)
        {
            ext=n%10;
            sum= sum + ext*ext*ext;
            n= n/10;
        }
        if (org==sum)
        {
            cout<<"The entered number is armstrong"<<endl;

        }
        else
        {
            cout<<"The entered number is not armstrong"<< endl;

        }
    }
};



int main() 
{ armst obj;
obj.input (4);
obj.display();
    
    return 0;
}