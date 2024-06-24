#include <iostream>
using namespace std;
typedef int B;
template <class T1 , class T2>

class sum
{
    private:
    T1 a;
    T2 b;

    public:
    void input(T1 x, T2 y)
    {
        a=x;
        b=y;
    }


    void display()
    {
        cout<<"sum ="<<(a-b)<<endl;
    }

    
};

int main() {
    sum <B,float> s1;
    sum<float, B> s2;
    s1.input(2,4.5);
    s2.input(3.3,3);
    s1.display();
    s2.display();
    return 0;
}