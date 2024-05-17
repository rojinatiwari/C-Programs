#include <iostream>
using namespace std;
class larg
{
    private:
    int n1,n2,n3;

    public:
    larg (int num1, int num2, int num3)
    {
        n1=num1; n2=num2; n3=num3;
    }

    void display()
    {
     if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " <<n1;
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    else 
        cout << "Largest number: " << n3;
    }
};

int main() {
    larg obj (3,4,5);
    obj.display();
    return 0;
}