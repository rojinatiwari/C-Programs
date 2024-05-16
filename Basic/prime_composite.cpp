#include <iostream>
using namespace std;
class checkprimecomposite
{
    private:
    int n,c=0;
    
    public:
    checkprimecomposite ()
    {
        cout<<"Enter a number n:";
      cin>>n;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if (c==2)
    cout<<"The number is PRIME"<<endl;
    else
    cout<<"The number is COMPOSITE"<<endl;
    }
};

int main() {
    checkprimecomposite o;
    return 0;
}