#include <iostream>
using namespace std;
template <class T1, class T2>

class multipleGeneric{
    private:
    T1 a;
    T2 b;


    public:
    void input(T1 x, T2 y)
    { a=x;b=y;

    }

    void display(){
        cout<<"sum = "<<(a+b)<<endl;
    }
};

int main() {
    multipleGeneric <int,float> s;
    multipleGeneric <float,int> s1;
    s.input(3,3.3);
    s.display();
    s1.input(3.3,4);
    s1.display();
    return 0;
}