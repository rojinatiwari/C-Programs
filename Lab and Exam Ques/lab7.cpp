
#include <iostream>
using namespace std;
class unary
{
    int p;
    int q;
    int r;

public:
    void getdata(int a, int b, int c);
    void display();
    friend void operator-(unary &o);
};
void unary::getdata(int a, int b, int c)
{
    p = a;
    q = b;
    r = c;
}
void unary::display() { cout << "p is:" << p << "\tq is:" << q << "\tris:" << r; }
void operator-(unary &o)
{
    o.p = -o.p;
    o.q = -o.q;
    o.r = -o.r;
}
int main()
{
    unary u;
    u.getdata(30, -50, 40);
    cout << "Before overloaded\t";
    u.display();
    cout << "\nAfter overloaded\t";
    -u; // overloading -operator
    u.display();
    return 0;
}