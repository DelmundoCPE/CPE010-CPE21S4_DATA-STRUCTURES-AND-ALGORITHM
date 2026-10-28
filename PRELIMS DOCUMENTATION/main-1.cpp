#include <iostream>

#define maxSize 10

int stackArr[maxSize];
int top = -1, newData, choice;

bool isEmpty();
bool isFull();
void Top();
void push();
void pop();

int main() {

    std::cout << "================================\n";
    std::cout << "Stack Operations:\n";
    std::cout << "[1] Push [2] Pop [3] isEmpty [4] isFull [5] Top\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;   // Added semicolon

    std::cout << "================================\n";

    switch (choice) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            std::cout << "Is the stack empty? " << isEmpty() << std::endl;
            break;
        case 4:
            std::cout << "Is the stack full? " << isFull() << std::endl; // Fixed stdd
            break;
        case 5:
            Top(); // Fixed ; to :
            break;
        default:
            std::cout << "Invalid Choice!" << std::endl;
            break;
    }

    return 0;
}

bool isEmpty() {
    return (top == -1);
}

bool isFull() {
    return (top == maxSize - 1);
}

void Top() {
    if (isEmpty()) {
        std::cout << "Stack is empty!" << std::endl;
        return;
    }

    std::cout << "The top element is: " << stackArr[top] << std::endl;
}

void push() {

    if (isFull()) {
        std::cout << "Stack is full!" << std::endl;
        return;
    }

    std::cout << "What integer do you want to push? ";
    std::cin >> newData;

    stackArr[++top] = newData;
}

void pop() {

    if (isEmpty()) {
        std::cout << "Stack is empty!" << std::endl;
        return;
    }

    std::cout << "Popping: " << stackArr[top] << std::endl;

    top--;   // Added semicolon
}