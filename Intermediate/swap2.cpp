#include <iostream>
using namespace std;
template<class T1, class T2>
void swap(T1 a, T2 b) 
{ 
    cout<<"Before Swapping = "<<a<<","<<b<<endl;
    T1 temp = a; 
    T2 x = b; 
    T1 y =  temp; 

    cout<<"After swapping = "<<x<<","<<y<<endl;
} 

int main()
 {
    swap (3,6.4);
    swap(2.2,3);

    
    return 0;
}



