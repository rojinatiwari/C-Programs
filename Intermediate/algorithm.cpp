#include <iostream>
#include<algorithm>
using namespace std;

void aprint(int a[] , int l)
{
    for(int i=0; i<l; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int ar[]={3,8,6,0,2,7};
    aprint(ar,5);
    sort(ar,ar+5);
    aprint(ar,5);
    reverse(ar,ar+5);
    aprint(ar,5);
    
    return 0;
}