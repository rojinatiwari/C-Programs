#include <iostream>
using namespace std;
class Print
{
    public:
    void print(int a)
    {
        cout<<a<<endl;
    }
    void print(char c)
    {
        cout<<c<<endl;
    }
    void print(double d)
    {
        cout<<d<<endl;
    }
};
int main() {
    Print p;
    p.print(9);
    p.print('g');
    p.print(3.3);
    
    return 0;
}