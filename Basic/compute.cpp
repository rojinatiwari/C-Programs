#include <iostream>
using namespace std;
class Comp
{
    private:
    int *x,*y;
    

    public:
    Comp(int a , int b){
        x = new int;
        *x = a;
        y = new int;
        *y = b;
    }

    void display()

    {  

        cout<<"Enter the coordinates point"<<endl;
        cout<<"complex numbers : "<<*x<<"+"<<*y<<"i"<<endl;
        cout<<"complex numers2 :"<<x<<"+"<<y<<"i";
        cout<<"sum = :"<<(x+*x)<<"+"<<(y+*y)<<endl;

    }

    ~Comp(){
        cout<<"object destroyed"<<endl;
    }
};

int main() {
    Comp c(4,3);
    c.display();
    return 0;
}