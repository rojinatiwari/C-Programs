//concept of multiple catch

#include <iostream> // exception handling for multiple catches
#include <conio.h>

using namespace std;

int main() {
    float Op1, Op2, Result;
    char Opr;

    try {
        cout << "To proceed, enter a number, an operator, and a number:\n";
        cin >> Op1 >> Opr >> Op2;

        if (Opr != '+' && Opr != '-' && Opr != '*' && Opr != '/')
            throw Opr;
        if (Opr == '-' && Op1 < Op2)
            throw Op1;

        switch (Opr) {
            case '+': Result = Op1 + Op2; break;
            case '-': Result = Op1 - Op2; break;
            case '*': Result = Op1 * Op2; break;
            case '/': Result = Op1 / Op2; break;
        }

        cout << "\n" << Op1 << " " << Opr << " " << Op2 << " = " << Result;
    }
    catch (const char n) {
        cout << "\nOperation Error: " << n << " is not a valid operator" << endl;
    }
    catch (float Op1) {
        cout << "\nOp1 must be greater than Op2 when using '-' operator" << endl;
    }

    getch();
    return 0;
}
