#include <iostream>
#include <math.h>
using namespace std;
class Polar
{
public:
    float radius, angle;

    Polar() {}
    Polar(float rad, float ang)
    {
        radius = rad;
        angle = ang;
    }
    void display()
    {
        cout << radius << " and " << angle << endl;
    }
};

class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle() {}
    Rectangle(Polar p)
    {
        length = p.radius * cos(p.angle);
        breadth = p.angle * sin(p.angle);
    }
    void display()
    {
        cout << length << " x " << breadth << endl;
    }
};
int main()
{
    Polar p(10.0, 0.78);
    Rectangle r;
    r = p;
    r.display();
    return 0;
}