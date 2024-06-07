#include <iostream>

using namespace std;
class mountain
{
    private:
    string name1, name2;
    float height1 ,height2;
    string loc1,loc2;

    public:
    mountain(string n1, string n2, float h1, float h2 ,string l1,string l2)
    {name1=n1;name2=n2;
    height1=h1;height2=h2;
    loc1=l1;loc2=l2;
    }
     
     float cmpHeight(float height1,float height2)
     {
        return(height1>height2?height1:height2);
     }

     void displayInf()
     {cout<<"Name of mountain="<<name1<<","<<"Height="<<height1<<","<<"location="<<loc1<<endl;
     cout<<"Name of mountain="<<name2<<","<<"Height="<<height2<<","<<"location="<<loc2<<endl;
     cout<<"The highest height is = " <<cmpHeight( height1, height2)<<endl;

     }

     ~mountain()
     {cout<<"object destroyed!"<<endl;
     }
};


int main() {
    mountain m("Mount Everest","Kangchenjunga",8848.86,8568,"Nepal","Nepal");
    m.displayInf();
    return 0;
}