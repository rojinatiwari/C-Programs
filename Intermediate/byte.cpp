#include <iostream>
using namespace std;
class Memory
{
    private:
    int  kiloByte, megaByte;

    public:
    Memory() {}
    

    Memory(int b)
    {
       kiloByte =b/1024;
        megaByte=b/(1024*1024) ;
    }

    void display()
    {
        cout<<kiloByte<<":"<<megaByte<<endl;
    }
};


int main() 
{
    Memory m;
    int tot = 8000088;
    m= tot ;
    m.display();
     

  return 0;
}
