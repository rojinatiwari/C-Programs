#include <iostream>
using namespace std;
class stu{
    protected:
    string name;

    stu(string n){
        name=n;
    }};

    class test: virtual public stu{
        protected:
        float mark;

        
        test(string n, float m): stu(n){
            mark=m;
        }

        };

        class eca: virtual public stu{
            protected:
            char grade;

            
            eca(string n, char g):stu(n){
                grade=g;
            }
        };
        class result: public test, public eca{
            private:
            string res;
            
           
            public:
            result(string n , float m , char g ): test(n , m), eca(n , g),stu(n){
                
                res = (mark >= 45?"Pass":"Fail");
            }
        

        void display(){
            cout<<name<<" "<<mark<<" "<<res<<" "<<grade<<endl;
        }

        ~result(){
            cout<<"object destroyed !"<<endl;
        }
        };


    

int main() {
    result r1("Rojina",86, 'A');
    r1.display();
    
    return 0;
}