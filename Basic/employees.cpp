#include <iostream>
using namespace std;

class EMP {
    private:
    char name[100];
    int e_id;
    string contact;  // Changed contact to string to accommodate numbers with '+'

    public:
    void input() {
        cout << "\nEnter emp-id: ";
        cin >> e_id;
        cin.ignore();  // Ignore newline character left in the buffer by previous input
        cout << "Enter the employee's name: ";
        cin.getline(name, 100);
        cout << "Enter contact no: +977";
        cin >> contact;
    } 

    void display() {
        cout << e_id << "\t" << name << "\t+977" << contact;
    }
};

int main() {   
    EMP e[5];
    for (int i = 0; i < 5; i++) {
        e[i].input();
    }

    cout << "\n e_id \t name \t  contact\n";

    for (int i = 0; i < 5; i++) {
        e[i].display();
        cout << endl;
    }

    return 0;
}