#include <iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    file.open("first file.txt",ios::in);
    string x;
    while (getline(file , x))
    cout<<x<<endl;
    file.close();
    return 0;
}