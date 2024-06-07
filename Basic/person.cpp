#include <iostream>

using namespace std;
class person
{
    protected:
    string name;
    float code;

    public:
    person(string n,float c)
    {name=n;
    code=c;
    }
};

class account: virtual public person
{
    protected:
    float salary;

    public:
    account(string n,float c,float s):person(n,c)
    {
        salary=s;
    }
};

class admin: virtual public person
{
    protected:
    int experiences;

    public:
    admin(string n,float c,int e):person(n,c)
    {
        experiences=e;

    }
};

class record:public account,public admin
{
    private:
    int recordno;

    public:
    record( string n,float c, float s,int e,int r):person(n,c) , account(n,c,s), admin(n,c,e)
    {
        recordno=r;
    }
    

    void display()
    {
        cout<<"Name of the person="<<name<<","<<"Code no="<<code<<","<<"Salary="<<salary<<","<<"No of years of experiences"<<experiences<<","<<"Record No.="<<recordno<<endl;
    }


};



int main() {
    record r("EVELYN",55,500000,3, 44);
    r.display();
    return 0;
}








