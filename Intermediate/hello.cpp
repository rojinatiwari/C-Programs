#include <iostream>
#include<stack>
using namespace std;

int main() 
{
    // Push elements into the stack
    string str ="Hello";
    stack <char> s;
    for (int i = 0; i <str.size(); i++)
    {
        s.push(str[i]);
        
    }
string ans ="";
     // Print and pop elements from the stack
    while (!s.empty())
    {
       ans=ans +s.top();
        s.pop();
    }

    cout<<"Reverse string : "<<ans<<endl; 
    
    return 0;
}