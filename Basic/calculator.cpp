#include <iostream>

using namespace std;

class number
{
    protected :
    int num1,num2;

    public:
        void input( int n1, int n2)
        {
            num1=n1;num2=n2;
        } 
};




class calculate: public number
{
    public:
    void display()
    {
        float res;
        char oper;
        cout<<"enter the operator:";
         cin>>oper;

         cout<<"calculate="<<num1<<"oper"<<num2<<endl;


        switch(oper)
    {
        case'-':
        res=num1-num2;
        cout<<"Result="<<res;
        break;

        case'+':
        res=num1+num2;
        cout<<"Result="<<res;
        break;

        case'*':
        res=num1*num2;
        cout<<"Result="<<res;
        break;

        case'/':
        res=num1/num2;
        cout<<"Result="<<res;
        break;
        
        default:
       cout<<"The operation is not valid"<<endl;
    }
   
}
};

int main() {
    calculate c;
    c.input(9,6);
    c.display();
    return 0;
}