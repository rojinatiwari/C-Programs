#include <iostream>
using namespace std;
class base
{
    public:
    void display(int a)
    {
        cout<<a<<endl;
    }
};

class derive:public base
{
    public:
    void display(int a)
    {
        cout<<a+5<<endl;
    }
};
int main() {
    derive d;
    d.display(6);
    return 0;
}