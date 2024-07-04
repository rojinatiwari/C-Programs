#include <iostream>
using namespace std;
class Memory
{
    private:
    int byte, kb, mb;

    public:
    Memory() {}
    

    Memory(int b)
    {
      mb=b/1048576; //(1024*1024)
int fkb=b%1048576; 
kb=fkb/1024;
byte=fkb%1024; ;
    }

    void display()
    {
       cout<<"The mb:"<<mb;
cout<<"\tThe kb:"<<kb;
cout<<"\tThe byte:"<<byte;
    }
};


int main(){ int k;
cout<< "Enter integer bytes";
 cin >>k;
Memory m=k;
m.display();
return 0;
}
