#include <iostream>
using namespace std;
template <class T>
void product (T a, T b)
{
    cout<<"Product = "<<(a*b)<<endl;
}
int main() {
    product (2,5);
    product(3.2,3.3);
    return 0;
}