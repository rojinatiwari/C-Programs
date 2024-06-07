#include <iostream>
using namespace std;
class class2;
class class1
{private:
int num1;

public:
void firstNumber(int n1)
{num1=n1;

}
friend int max(class1 obj1, class2 obj2);
};

class class2
{private:
int num2;

public:
void secondNumber(int n2)
{num2=n2;

}
friend int max(class1 obj1, class2 obj2);
};

int max(class1 obj1, class2 obj2)
{
    return(obj1.num1>obj2.num2? obj1.num1:obj2.num2);
}

int main() {
    class1 n1;
    n1.firstNumber(9);
    class2 n2;
    n2.secondNumber(10);
    cout<<"maximum number="<<max(n1,n2);
    

    return 0;
}