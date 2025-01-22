#include <iostream>
using namespace std;
class Node {
public:
    char value;
    Node* next;
    Node(char val) {
        value = val;
        next = nullptr;
    }
};

class Stack {
    public:
    Node* top;
    Stack() {
        top = nullptr;
    }
    void push(char val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
    char pop() {
        if (isEmpty()) return '\0';
        char p = top->value;
        Node* temp = top;
        top = top->next;
        delete temp;
        return p;
    }
    char peek() {
        if (isEmpty()) return '\0';
        return top->value;
    }
    bool isEmpty() {
        return top == nullptr;
    }
};

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

string change(string& expression) {
    Stack stack;
    string postfix = "";
    for (size_t i = 0; i < expression.length(); i++) {
        char ch = expression[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            postfix += ch;
        }
         else if(ch == '('){
            stack.push(ch);
        } 
        else if(ch == ')') {
            while (!stack.isEmpty() && stack.peek() != '('){
                postfix += stack.pop();
            }
            stack.pop();
        }
         else{
            while (!stack.isEmpty() && precedence(stack.peek()) >= precedence(ch)) {
                postfix += stack.pop();
            }
            stack.push(ch);
        }
    }
    while(!stack.isEmpty()) {
        postfix += stack.pop();
    }
    return postfix;
}

int main() {
    string expression = "((A+B)-C*(D/E))+F";
    cout << "Infix Expression: " << expression << endl;
    string postfix = change(expression);
    cout << "Postfix Expression: " << postfix << endl;
    return 0;
}
