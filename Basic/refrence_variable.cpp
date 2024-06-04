#include <iostream>

using namespace std;
class sum
{private:
float a,b;
public:
void input(float x, float y);
friend float add(sum o);
};

void sum::input (float x, float y){
    a=x;b=y;
}

float add(sum o){
    return(o.a+o.b);
}
int main() {
    sum s;
    s.input (3.4,2.2);
    cout<<add(s)<<endl;
    sum&s1=s;
    cout<<add(s1);
    return 0;
}