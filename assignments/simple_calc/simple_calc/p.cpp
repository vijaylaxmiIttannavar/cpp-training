#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    cout << "Simple Calculator\n";
   
    while (true)
    {
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;      
            exit;
        default:
            cout << "Invalid operat";
        }
    }
}