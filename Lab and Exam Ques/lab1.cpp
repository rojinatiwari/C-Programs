#include <iostream>

using namespace std;
class Employee
{
    private: 
    string name;
    int eid;
    double salary;

    public:
    
    void input(){
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the id"<<endl;
        cin>>eid;
        cout<<"enter the salary"<<endl;
        cin>>salary;
    }
    

    void display()
    {
        cout<<"Name ="<<name<<","<<"id ="<< eid<<","<<"salary = "<<salary;
    }



};
int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}