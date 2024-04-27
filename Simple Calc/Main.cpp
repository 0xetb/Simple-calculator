#include <iostream>
#include <cmath>
#include <limits>
#include<windows.h>  
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char choice;

    do {

        operation = '\0';
        num1 = 0.0;
        num2 = 0.0;

        cout << "Enter the first number: ";
        while (!(cin >> num1)) {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            while (cin.get() != '\n');
        }

        cout << "Enter the second number: ";
        while (!(cin >> num2)) {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            while (cin.get() != '\n');
        }

        cout << "Enter an operation (+, -, *, /, sqrt, pow): ";
        cin >> operation;

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
                cout << "Error: Division by zero" << endl;
            break;
        case 's':
            cout << "Square root of " << num1 << ": " << sqrt(num1) << endl;
            break;
        case 'p':
            cout << num1 << " raised to the power of " << num2 << ": " << pow(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
        }
        system("pause");
        system("cls");
        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
