//  composition ; object of one class being contained within another class

#include <iostream>

using namespace std;

class area //existing class
{ 
    private:
     float len,bre;

    public:
    float cal(float a , float b){
        len=a;
        bre=b;
        return(len*bre);

    }
};

class display{ // new class
    private:
    area obj; // obj: object of class area

    public:
    void output(){
        cout<<"Area="<<obj.cal(4.6,5.7)<<endl;
    }

};

int main() {
    display o;
    o.output();
    return 0;
}