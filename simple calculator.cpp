#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -,*, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
            
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
            
        case '/':
            // Check for division by zero
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
            
        default:
            // If the operator is not (+, -, *, /)
            cout << "error " << endl;
            break;
    }

    return 0;
}

