// No return type but with argument
#include <iostream>

using namespace std;

class SI
{
    private:
    
        float p,t,r;
    
    public:
    void readdata(float a, float b, float c)
    {p=a;
    t=b;
    r=c;
    }
   
    void putdata()
    { float si;
        si=(p*t*r)/100;
        cout<<"SI ="<<si;
    }

};

int main() 
{
   SI S;
   S.readdata(3600,2,6);
   S. putdata();
    return 0;
}