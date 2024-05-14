// No return type and without argument
#include<iostream>
using namespace std;
class circle
{
 private:
    float rad,area ;

    public:
    void calculate()
    {
        cout<<"Enter the radius of the circle";
        cin>>rad;
        area=3.14*rad*rad;
        cout<<"circle="<<area;
    }
};

int main()
{
    circle obj;
    obj.calculate();
    return 0;
}

  