#include <iostream>
#include<stack>
using namespace std;

int main() 
{
    // Push elements into the stack
    stack <int> s;
    for (int i = 0; i < 4; i++)
    {
        s.push(i);
    }

     // Print and pop elements from the stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout<<endl;
    
    return 0;
}