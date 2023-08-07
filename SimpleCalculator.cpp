#include<iostream>
using namespace std;
int main(){
    char op;
    double number1, number2;
    cout << "Enter the Operator (+,-,*,/): ";
    cin >> op;
    cout << "Enter two numbers one by one: ";
    cin >> number1 >> number2;
    switch (op){
    case '+':
        cout << number1 << "+" << number2 << "=" << (number1+number2);
        break;
         case '-':
        cout << number1 << "-" << number2 << "=" << (number1-number2);
        break;
         case '*':
        cout << number1 << "*" << number2 << "=" << (number1*number2);
        break;
         case '/':
         if(number2!=0.0)
        cout << number1 << "/" << number2 << "=" << (number1/number2);
        else
        cout << "Divided by Zero situation";
        break;
    default:
    cout << op << "is an invalid operator";
        break;
    }
    return 0;
}