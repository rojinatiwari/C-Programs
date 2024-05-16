#include <iostream>
#include<string>
using namespace std;

class emp_id
{
    private:
    string name;
    int e_id;
    int contact;

    public:
    void input();
    void display();

};

void emp_id :: input()
{
    cout<<"\n Enter emp-id";
    cin>>e_id;
    cout<<"Enter the employees id's name";
    getline(cin>>ws,name);
    cout<<"Enter contact no:+977";
    cin>>contact;

};

void emp_id :: display()
{
    cout<< "e_id<<name<< contact";
};

int main()
 {
    emp_id e[5];
    for( int i = 0; i < 5; i++)
    {
        e[i].input ();
    }

    cout<< "\n e_id \t name \t  contact;\n";

    for( int i = 0; i < 5; i++)
    {
        e[i].display ();
        cout<< endl;
    }

}
    

