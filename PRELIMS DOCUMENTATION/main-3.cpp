#include <iostream>
#include <string>
using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(char ch) {
    if (!isFull())
        stack[++top] = ch;
}

char pop() {
    if (!isEmpty())
        return stack[top--];
    return '\0';
}

char peek() {
    if (!isEmpty())
        return stack[top];
    return '\0';
}

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isBalanced(string exp) {
    top = -1;

    for (char ch : exp) {

        if (ch == '(' || ch == '[' || ch == '{') {
            push(ch);
        }

        else if (ch == ')' || ch == ']' || ch == '}') {

            if (isEmpty())
                return false;

            char open = pop();

            if (!isMatching(open, ch))
                return false;
        }
    }

    return isEmpty();
}

int main() {

    string expression;

    cout << "Enter an expression: ";
    getline(cin, expression);

    if (isBalanced(expression))
        cout << "Expression is BALANCED." << endl;
    else
        cout << "Expression is NOT BALANCED." << endl;

    return 0;
}