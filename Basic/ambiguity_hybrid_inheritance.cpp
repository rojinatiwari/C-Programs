// Ambiguity ( same function may contain more than one base class)
// To resolve these problems,we use the keyword virtual base class 
// virtual base class: a concept used in multiple inheritances to prevent ambiguity

#include <iostream>
using namespace std;
class stu
{
    protected:
    string name;

    public:
    void inputn(string n) 
    {
        name=n;
    }
};


class test: virtual public stu
{
    protected:
    float mark;

    public:
    void inputm(float m)
    {
        mark=m;

    }
};

class eca: virtual public stu
{ 
    protected:
    char grade;

    public:
    void inputg(char g)
    {
        grade=g;
    }
};

class result: public test,public eca
{
    private:
    string res;

    public:
    void display()
    { 
        res=(mark>=45?"Pass":"Fail");
        cout<<name<<" ,"<<mark<<" ,"<<res <<" ,"<<grade<<endl;

    }
};





int main() {
    result r;
    r.inputn("ROJINA TIWARI");
    r.inputm(88);
    r.inputg('A');
    r.display();
    return 0;
}