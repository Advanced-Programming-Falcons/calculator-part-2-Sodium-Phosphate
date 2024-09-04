#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    cout << "Nerd, imagine using a calculator" << endl;
    string history = "";
    while (1 == 1){
    double num1;
    double num2;
    char op;
    cout << "Operators: +, -, *, /, ^, r (root), e (end), h (history) " << endl;
    cout << "Enter Equation: " << endl;
    cin >> num1 >> op >> num2;
    if (op == 'e'){break;}
    cout << " " << endl;
    switch(op){
    case '+':
    cout << "Answer: " << num1 + num2 << endl;
    history = history + to_string(num1) + " + " + to_string(num2) + " = " + to_string(num1+num2) + "\n";
    break;
    
    case '-':
    cout << "Answer: " << num1 - num2 << endl;
    history = history + to_string(num1) + " - " + to_string(num2) + " = " + to_string(num1-num2) + "\n";
    break;
    
    case '*':
    cout << "Answer: " << num1 * num2 << endl;
    history = history + to_string(num1) + " * " + to_string(num2) + " = " + to_string(num1*num2) + "\n";
    break;
    
    case '/':
    cout << "Answer: " << num1 / num2 << endl;
    history = history + to_string(num1) + " / " + to_string(num2) + " = " + to_string(num1/num2) + "\n";
    break;
    
    case '^':
    cout << "Answer: " << pow(num1, num2) << endl;
    history = history + to_string(num1) + " ^ " + to_string(num2) + " = " + to_string(pow(num1, num2)) + "\n";
    break;
    
    case 'r':
    cout << "Answer: " << pow(num1, (1/num2)) << endl;
    history = history + to_string(num1) + " r " + to_string(num2) + " = " + to_string(pow(num1, (1/num2))) + "\n";
    break;
    
    case 'h':
    cout << "History: " << endl;
    cout << history << endl;
    break;
    
    default:
    cout << "Not a valid operator" << endl;
    break;
    }
    cout << " " << endl;
    }

    return 0;
}


