//To demonstrate new and delete operator 

#include <iostream>
using namespace std;
class fact
{
    private:
    int *n;

    public:
    fact (int a)
    {
        n=new int; 
        *n=a;
    }

    void display()
    {
        int i, f=1;
        for ( i = 1; i < *n; i++)
        {
            f= f*i;
            cout<<"fact="<< f<< endl;
        }
        
    }
    // deallocate the memory allocated by constructor is destructor
    ~fact()
    {
        cout<<"object destroyed"<<endl;
    }

};
int main() {
    fact obj (6);
    obj.display();
    return 0;
}