#include <iostream>
#include<math.h>
using namespace std;
//destination class
class Rect
{
    private:
    float xw,yw;

    public:
    Rect(){}

    Rect(float x, float y)
    {
        xw=x;
        yw=y;

    }

    void display()
    {
        cout<<xw<<","<<yw<<endl;
    }
};

class polar
{
    private:
    float rad,ang;

    public:
    polar(){}

    polar(float rd,float an)
    {
        rad=rd;
        ang=an;
    }

    //we use overloading casting operator in source class
    operator Rect()
    {
        float x=rad*cos(ang);
        float y=rad*sin(ang);
        return Rect(x,y);
    }
};

int main() {
    Rect r;
    polar p(10.0,0.78);
    r=p;
    r.display();
    return 0;
}