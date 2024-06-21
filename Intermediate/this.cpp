#include <iostream>
using namespace std;
class Area
{
    private:
    int len,bre;

    public:
    void input(int len,int bre)
    {
        this->len=len;
        this->bre=bre;
    }

    void display()
    {
        cout<<len*bre<<endl;
    }
};



int main() {
    Area a;
    a.input(5,7);
    a.display();
    return 0;
}