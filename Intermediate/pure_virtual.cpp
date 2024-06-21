#include <iostream>
using namespace std;
class Area
{
    protected:
    float l,b;

    public:
    void input(float x, float y)
    {
        l=x;b=y;
    }

    virtual void display()=0;
};


class Rect:public Area 
{
    public:
    void display(){
        cout<<"rarea ="<<(l*b)<<endl;
    }
};


class Tri: public Area
{
    public:
    void display()
    {
        cout<<"tarea ="<<(0.5*l*b)<<endl;
    }
};

int main() {
    Area *aptr;
    Rect r;
    Tri t;
    aptr=&r;
    aptr->input(2,5);
    aptr->display();
    aptr=&t;
    aptr->input(2,5);
    aptr->display();
    return 0;
}