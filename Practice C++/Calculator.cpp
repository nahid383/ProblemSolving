#include <iostream>
#include <cmath>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    char op;
    int num1, num2;
    
    cout << "What do you want to do?\n";
    cout << "Operators are: + , - , * , / , ^, $, % \n";
    cout << "For Summation = '+'\n";
    cout << "For Subtraction = '-'\n";
    cout << "For Multiplication = '*'\n";
    cout << "For Division = '/'\n";
    cout << "For Modulus = '%'\n";
    cout << "For Square = '^'\n";
    cout << "For SquareRoot = '$'\n";

    cout << "Enter any operator: ";
    cin >> op;

    if (op == '^' || op == '$') {
        cout << "Enter a number: ";
        cin >> num1;
        if (op == '^') {
            cout << "Square: " << num1 * num1 << endl;
        } else {
            cout << "Square Root: " << fixed << setprecision(3) << sqrt(num1) << endl;
        }
        return 0;
    }

    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Summation: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtraction: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Product: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                cout << "Division: " << fixed << setprecision(3) << (float)num1 / num2 << endl;
            }
            break;
        case '%':
            if (num2 == 0) {
                cout << "Error! Modulus by zero is not allowed." << endl;
            } else {
                cout << "Modulus: " << num1 % num2 << endl;
            }
            break;
        default:
            cout << "Please enter a valid operator." << endl;
    }

    return 0;
}
