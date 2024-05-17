#include <iostream>
using namespace std;
class palindrome
{
    private:
    int n,r,sum=0,temp;

    public:
 
        //constructor name is same name as class
        //constructor never contain witten type
  palindrome () 
  {cout<<"Enter the Number=";    
  cin>>n;    
  temp=n;    
  while(n>0)    
{    
  r=n%10;    
  sum=(sum*10)+r;    
   n=n/10;    
}    
 if(temp==sum)    
 cout<<"Number is Palindrome.";    
 else    
 cout<<"Number is not Palindrome.";}
  
};

int main() {
     // palin is object
     // when obj is called, constructor is automatically called.
    palindrome palin; 

    return 0;
}