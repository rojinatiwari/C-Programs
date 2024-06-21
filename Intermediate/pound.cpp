#include <iostream>
using namespace std;
class Pound
{
    private:
    float p;

    public:
    Pound(){}
    
    Pound(float a)
    {
        p=a;
    }

    void display()
    {
        cout<<"pound"<<p<<endl;
    }
};


class Kg
{
    private:
    float k;

    public:
    Kg(){}

    Kg(float b)
    {
        k=b;
    }

    operator Pound()
    {
        float a = k*2.205;
        return a;
    }
};

int main() 
{
    Pound pd;
    Kg k(22);
    pd=k;
    pd.display();
    return 0;
}