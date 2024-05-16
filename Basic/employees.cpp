#include <iostream>

using namespace std;
class EMP
{
    private:
    char name[100];
    int id,cont;

    public:
    void input ()
   {
    cout<<"Enter the emp name,id and contact no";
    cin >>name>>id>>cont;
   } 


   void display()
   {
    cout<<name<< ","<<id<< ","<<cont;
   }
};

int main()
 {   
    EMP e[5];
    int i;
    for ( i = 0; i <= 5; i++)
    {
        e[i].input();
    }
    for ( i = 0; i <= 5; i++)
    {
        e[i].display();
    }
    
    
    return 0;
}