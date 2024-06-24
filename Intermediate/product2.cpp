#include <iostream>
using namespace std;
template <class T>

class prod
{
    private:
    T a,b;

    public:
    void input(T x, T y)
    {
        a=x;b=y;
    }

    void display()
    {
        cout<<"product = "<<(a*b)<<endl;
    }

};

int main() {
    prod <int> p1;
    prod <float> p2;
    p1.input(3,2);
    p2.input(5.4,6.5);
    p1.display();
    p2.display();
    return 0;
}