#include <iostream>
using namespace std;
class unary
{
    private:
    int x,y,z;

    public:
    unary(int a, int b, int c)
    {
        x=a;y=b;z=c;
    }

    void display()
    {
        cout<<x<<","<<y<<","<<z<<endl;
    }

    void operator -()
    {x=-x;
    y=-y;
    z=-z;
    }
};

int main() 
{unary u(4,7,-8);
u.display();
 -u; // overload
 u.display();
    return 0;
}