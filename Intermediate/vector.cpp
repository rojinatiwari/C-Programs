#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    vector <int> v;
    for (int i = 0; i < 4; i++)
    {
        v.push_back(i);
    }
    for ( int i = 0; i < 4; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}