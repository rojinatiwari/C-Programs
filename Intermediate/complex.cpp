#include <iostream>
using namespace std;
class complex
{
    private:
    int x,y;

    public:
    complex(){}

    complex(int a, int b)
    {
        x=a;y=b;
    }

    void display()
    {
        cout<<x<<"+i"<<y<<endl;
    }

    friend  complex operator +(complex obj1, complex obj2)
    { complex temp;
    temp.x=obj1.x+obj2.x;
    temp.y=obj1.y+obj2.y;
    return(temp);
    }
};

int main() 
{complex c1(5,4),c2(3,5),c3;
c3= c1 + c2;
c3.display();
    return 0;
}