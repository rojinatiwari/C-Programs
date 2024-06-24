#include <iostream>
using namespace std;
template <class T1, class T2>
void sum(T1 a, T2 b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
int main() {
    sum (2,3.5);
    sum(3.2,5.4);
    return 0;
}