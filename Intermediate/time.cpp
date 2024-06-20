#include <iostream>
using namespace std;
class Time
{
    private:
    int hr, min;

    public:
    Time() {}
    

    Time (int d)
    {
        hr=d/60;
        min=d%60;
    }

    void display()
    {
        cout<<hr<<":"<<min<<endl;
    }
};


int main() 
{
    Time t;
    int dur = 80;
    t= dur ;
    t.display();
     

  return 0;
}
