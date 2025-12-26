/*
Problem-1: Create a small calculator which performs operations 
such as Addition, Subtraction, Multiplication and Division using class.
Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string
*/

#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    double calculate(double a, double b, string operation)
    {
        if (operation == "Add")
            return a + b;
        else if (operation == "Subtract")
            return a - b;
        else if (operation == "Multiply")
            return a * b;
        else if (operation == "Divide")
        {
            if (b != 0)
                return a / b;
            else
            {
                cout << "Error: Division by zero!" << endl;
                return NAN;
            }
        }
        else
        {
            cout << "Error: Invalid operation!" << endl;
            return NAN;
        }
    }
};


int main()
{
    Calculator calc;
    double a, b;
    string operation;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operation (Add/Subtract/Multiply/Divide): ";
    cin >> operation;

    double result = calc.calculate(a, b, operation);
    cout << "Result: " << result << endl;

    return 0;
}