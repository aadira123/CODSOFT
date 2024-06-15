#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    char operation;
    double num1, num2;
    int q;

    cout << "--> Enter the value of number 1: ";
    cin >> num1;
    cout << "--> Enter value of number 2 : ";
    cin >> num2;
    cout << "--> Number of operations you want to perform: ";
    cin >> q;

    while (q--)
    {
        cout << "--> Enter a operation out of the following (+ , - , * , /): ";
        cin >> operation;

        switch (operation)
        {

        case '+':
            cout << "Addition of the two numbers gives: " << (num1 + num2) << endl;
            cout << endl;
            break;

        case '-':
            cout << "Substraction of the two numbers give: " << (num1 - num2) << endl;
            cout << endl;
            break;

        case '*':
            cout << "Multiplication of the two numbers gives: " << (num1 * num2) << endl;
            cout << endl;
            break;

        case '/':
            cout << "Division of the two numbers: " << (num1 / num2) << endl;
            cout << endl;
            break;

        default:
            cout << "Such operation cannot be done by the calculator" << endl;
        }
    }

    return 0;
}
