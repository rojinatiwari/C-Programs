#include <iostream>
using namespace std;
class Inch
{
    private:
    float i;

    public:
    Inch(){}
    
    Inch(float a)
    {
        i=a;
    }

    void display()
    {
        cout<<"Inch = "<<i<<endl;
    }
};


class Foot
{
    private:
    float f;

    public:
    Foot(){}

    Foot(float b)
    {
        f=b;
    }

    operator Inch()
    {
        float a = f*12;
        return a;
    }
};

int main() 
{
    Inch o;
    Foot F(14);
    o=F;
    o.display();
    return 0;
}