#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

int applyOperator(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
        default: return 0;
    }
}

void reverseString(char expr[], int length) {
    int start = 0, end = length - 1;
    while (start < end) {
        char temp = expr[start];
        expr[start] = expr[end];
        expr[end] = temp;
        start++;
        end--;
    }
}

void infixToPrefix(char expr[], int length) {
    stack<char> operators;
    char result[length];
    int k = 0;

    reverseString(expr, length);
    
    for(int i = 0; i < length; i++) {
        if (expr[i] == '(') {
            expr[i] = ')';
        } 
        else if(expr[i] == ')') {
            expr[i] = '(';
        }
    }

    for (int i = 0; i < length; i++) {
        if (expr[i] == ' ') {
            continue;
        }
        if (expr[i] >= '0' && expr[i] <= '9') {
            result[k++] = expr[i];
        }
        else if (isOperator(expr[i])) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(expr[i])) {
                result[k++] = operators.top();
                operators.pop();
            }
            operators.push(expr[i]);
        }
        else if (expr[i] == '(') {
            operators.push(expr[i]);
        }
        else if (expr[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                result[k++] = operators.top();
                operators.pop();
            }
            operators.pop();
        }
    }

    while (!operators.empty()) {
        result[k++] = operators.top();
        operators.pop();
    }

    result[k] = '\0';
    reverseString(result, k);
    cout << "Prefix Expression: ";
    for (int i = 0; i < k; i++) {
        cout << result[i];
    }
    cout << endl;
}

int evaluatePrefix(char expr[], int length) {
    stack<int> operands;
    for (int i = length - 1; i >= 0; i--) {
        if (expr[i] >= '0' && expr[i] <= '9') {
            operands.push(expr[i] - '0');
        } 
        else if (isOperator(expr[i])) {
            int a = operands.top(); operands.pop();
            int b = operands.top(); operands.pop();
            int result = applyOperator(a, b, expr[i]);
            operands.push(result);
        }
    }
    return operands.top();
}

int main() {
    char infix[] = "(34*2)-[{40/(4-2)}+2]";
    int length = 0;
    while (infix[length] != '\0') {
        length++;
    }
    infixToPrefix(infix, length);
    char prefix[] = "-*342+/{40-24}2";
    int prefixLength = 0;
    while (prefix[prefixLength] != '\0') {
        prefixLength++;
    }
    int result = evaluatePrefix(prefix, prefixLength);
    cout << "Evaluated Result: " << result << endl;

    return 0;
}
