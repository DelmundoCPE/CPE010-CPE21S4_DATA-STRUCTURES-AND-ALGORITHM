#include <iostream>
#include <stack>

int main() {

    std::stack<char> stack1;

    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;

    stack1.push('k');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('e');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('n');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('n');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('e');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('t');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    stack1.push('h');
    std::cout << "Current top of the stack: " << stack1.top() << std::endl;

    std::cout << "Is the stack empty? " << stack1.empty() << std::endl;
    std::cout << "What is the size of the stack? " << stack1.size() << std::endl;

    //swap

    //emplace


    return 0;
}