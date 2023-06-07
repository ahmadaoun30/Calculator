//
//  main.cpp
//  Calculator
//
//  Created by Ahmad aoun on 6/7/23.
//

#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    char operation;

    // input from the user
    cout << "Enter first number: ";
    cin >> number1;
    
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> number2;

    // Perform the calculation based on operation
    double result;
    switch (operation) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 0;
            }
            break;
        default:
            cout << "Invalid operation.\n";
            return 0;
    }

    // Display the result
    cout << "Result: " << result << '\n';

    return 0;
}
