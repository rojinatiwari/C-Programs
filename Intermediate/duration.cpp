#include <iostream>
using namespace std;
class Time
{
    private:
    int hr, min;

    public:
    Time() {}
    

    Time (int h,int m)
    {
        hr=h;
        min=m;
    }

    operator int()
    {
        int mn;
        mn=hr*60+min;
       return(mn);
    }
};


int main() 
{
    Time t(1,20);
    int dur;
    dur=t ;
    cout<<dur<<endl;
    return 0;
}
