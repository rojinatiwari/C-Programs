#include <iostream>
using namespace std;
class Rect
{
    private:
    int len,bre;

    public:
    Rect (int a , int c ){
        len=a;bre=c;

    }

    void display(){
        cout<<"area = : "<<len*bre<<endl;
    }

    ~Rect(){
        cout<<"object destroyed!!"<<endl;
    }

   
};
 

   
   
int main() {
    Rect r(4,3);
    r.display();
    
    return 0;
}