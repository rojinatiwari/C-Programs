#include <iostream>
using namespace std;

class book
{
    private:
    int id;
    string name;
    float price;

    public:
    book ()
    {}
    book ( int i,string n , float p)
    {
        id=i;name=n;price=p;
    }

    book(book & o)
    {
        id =o.id;
        name=o.name;
        price=o.price;
    }

    void display ()
    {
            cout<<id<<","<<name<<","<<price<<endl;
    }
    
    // deallocate the memory allocated by constructor is destructor
    ~book()
    {
        cout<<"object destroyed"<<endl;
    }

};

int main() {
    book b(1,"oop",400);
    book b1 (b);
    b.display();
    b1.display();
    return 0;
}