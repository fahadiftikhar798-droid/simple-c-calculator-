
Simple C++ Calculator

A minimalist, console-based calculator written in C++ that performs basic arithmetic operations. This project is ideal for beginners looking to understand basic C++ syntax, control flow, and user input handling.

Features

• Supports four basic arithmetic operations: Addition, Subtraction, Multiplication, and Division.
• Includes error handling for division by zero.
• Continuous execution loop allowing multiple calculations until the user chooses to exit.
• Clean, clear console user interface.

Prerequisites

To compile and run this project, you need a C++ compiler installed on your system:
• GCC/G++ (Linux/macOS)
• MSVC (Windows - Visual Studio)
• Clang (macOS/Linux)

Getting Started


1. Clone the Repository

bash
git clone https://github.com
cd simple-cpp-calculator
Use code with caution.

2. Compile the Code

Using standard g++, compile the main.cpp file:
bash
g++ -o calculator main.cpp
Use code with caution.

3. Run the Application

bash
./calculator
Use code with caution.

Source Code (main.cpp)
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




Contributing

Contributions are welcome! If you want to enhance this calculator (e.g., adding scientific functions, support for modulo, or a graphical interface):
1. Fork the repository.
2. Create a feature branch (git checkout -b feature/AmazingFeature).
3. Commit your changes (git commit -m 'Add some AmazingFeature').
4. Push to the branch (git push origin feature/AmazingFeature).
5. Open a Pull Request.


