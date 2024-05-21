#include <iostream>
using namespace std;
class fibo
{
    private:
    int *num;

    public :
    fibo (int n)
    {
        num= new int; *num=n;
    }

    void display ()
        {
            int a=0,b=1,c;
            cout<<"a="<<a;
            cout<<"b="<<b;
            for (int i = 0; i <*num; i++)
            {
                c=a+b;
                cout<<"c="<<c;
                a=b;
                b=c;
            }
        }
};

int main() {
    fibo ff (9);
    ff.display();

    return 0;
}