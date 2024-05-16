#include <iostream>
using namespace std;
class checkevenodd
{
    private:
int n;

   public:
void input()
{
    cout<<"Enter value for n:";
    cin>>n;
}

void oddevendisplay()
{
    if(n%2==0)
    cout<<"even"<<endl;
    else
    cout<<"odd"<<endl;
}
};

int main() {
    checkevenodd o;
    o.input();
    o.oddevendisplay ();
    return 0;
}