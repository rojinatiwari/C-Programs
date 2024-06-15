#include <iostream>
using namespace std;

class unary {
private:
    int x,y,z;

public:
    unary(int a, int b, int c)
    {
        x=a;y=b;z=c;
    }

    void display()
    {
        cout<<x<<","<<y<<","<<z<<endl;
    }

    // Declare the friend function for overloading unary minus
    friend unary operator-(unary num);

    
};

// Define the friend function for overloading unary minus
unary operator-(unary num) {
    num.x = -num.x;
    num.y = -num.y;
    num.z = -num.z;
    return num;
}

int main() {
    unary n1(5,6,-8);
    unary n2 = -n1;

    cout << "Original: ";
    n1.display();
    
    cout << "Negated: ";
    n2.display();

    return 0;
}