//Multi-level inheritance: A derived class is derived from the another derived class


#include <iostream>
using namespace std;


class student
{
    protected:
    string name;

    public:
    void inputn(string a)
    {
        name=a;
    }
};

class test: public student
{
    protected:
    float marks;

    public:
    void inputm(float b)
    {
        marks=b;
    }
};

class result: public test
{
    private:
    char res;

    public:
    void display()
    {
        res=(marks<45)?'F':'P';
    
   {
    cout<<name<<","<<marks<<","<<res<<endl;
   } 
    }
    
};

int main() {
    result obj;
    obj.inputn("Rojina");
    obj.inputm(90);
    obj.display();
    return 0;
}