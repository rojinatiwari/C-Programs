#include <iostream>
using namespace std;
template<class T1>
void swap(T1 a, T1 b) 
{ 
    cout<<"Before Swapping = "<<a<<","<<b<<endl;
    T1 temp = a; 
     a = b; 
    b=  temp; 

    cout<<"After swapping = "<<a<<","<<b<<endl;
} 

int main()
 {
    swap (3,6);
    swap(2,3);

    
    return 0;
}
