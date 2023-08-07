#include<iostream>
using namespace std;
int main(){
    char oprtr;
    double number1, number2;
    cout << "Enter the Operator (+, -, *, /): ";
    cin >> oprtr;
    cout << "Enter two numbers one by one: ";
    cin >> number1 >> number2;
    switch (oprtr){
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
        cout << "Divided by Zero situation... Undefined!";
        break;
    default:
    cout << oprtr << "This is an Invalid Operator";
        break;
    }
    return 0;
}