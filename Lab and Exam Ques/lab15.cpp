#include <iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    file.open("./file/first file.txt",ios::out);
    file<<"HELLO ! BESE Students.";
    file.close();
    return 0;
}