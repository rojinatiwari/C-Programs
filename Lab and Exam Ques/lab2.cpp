#include <iostream>
using namespace std;
class Rect{
    private:
    int x,y;

    public:
    void getData(int a, int b);
    void putData();
};

void Rect :: getData(int a, int b)
{
    x=a;
    y=b;
}

void Rect :: putData ()
{
    cout<<"num1 ="<<x<<"num2 ="<<y;
} 
int main() {
    Rect r;
    r.getData (3,4);
    r.putData();
    
    return 0;
}