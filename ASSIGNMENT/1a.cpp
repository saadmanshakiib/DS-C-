#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Get precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Convert infix to prefix
string infixToPrefix(string infix) {
    stack<char> operators;
    stack<string> operands;

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if (c == ' ') continue;

        // If character is a number
        if (c >= '0' && c <= '9') {
            string num;
            while (i < infix.length() && infix[i] >= '0' && infix[i] <= '9') {
                num += infix[i];
                i++;
            }
            i--;
            operands.push(num);
        } 
        else if (c == '(') {
            operators.push(c);
        } 
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                char op = operators.top(); operators.pop();
                string b = operands.top(); operands.pop();
                string a = operands.top(); operands.pop();
                operands.push(op + " " + a + " " + b);
            }
            operators.pop(); // Pop '('
        } 
        else if (isOperator(c)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                char op = operators.top(); operators.pop();
                string b = operands.top(); operands.pop();
                string a = operands.top(); operands.pop();
                operands.push(op + " " + a + " " + b);
            }
            operators.push(c);
        }
    }

    // Process remaining operators
    while (!operators.empty()) {
        char op = operators.top(); operators.pop();
        string b = operands.top(); operands.pop();
        string a = operands.top(); operands.pop();
        operands.push(op + " " + a + " " + b);
    }
    return operands.top();
}

// Evaluate prefix expression
int evaluatePrefix(string prefix) {
    stack<int> st;
    string temp = "";

    for (int i = prefix.length() - 1; i >= 0; i--) {
        char c = prefix[i];

        if (c == ' ') {
            if (!temp.empty()) {
                st.push(stoi(temp)); // Push the number onto the stack
                temp = "";
            }
        } else if (c >= '0' && c <= '9') {
            temp = c + temp; // Build the number
        } else if (isOperator(c)) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            switch (c) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
            }
        }
    }

    if (!temp.empty()) st.push(stoi(temp)); // Push the last number if any

    return st.top();
}

int main() {
    string infix = "(34*2)-((40/(4-2))+2)";
    string prefix = infixToPrefix(infix);

    cout << "Prefix Expression: " << prefix << endl;
    cout << "Evaluated Result: " << evaluatePrefix(prefix) << endl;

    return 0;
}
