#ifndef STACK_LIST_H
#define STACK_LIST_H

#include <iostream>

// class node that contain data and the next
template <typename T>
class Node{
public:
    T data;     // VALUE THAT WE NEED STORE
    Node* next; // POINTER TO THE NEXT NODE
};

// global pointer for the top of the stack
template <typename T>
Node<T>* head = nullptr;

// operation for the stack

// PUSH
template <typename T>
void push(T newData){
    //create a newNode and assign the newData
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;
    //new node points to current top, then becomes the new top
    newNode->next = head<T>;
    head<T> = newNode;
}

// POP
template <typename T>
T pop(){
    // check if the stack is empty:
    if(head<T> == nullptr){
        std::cout << "Stack Underflow." << std::endl;
        return T();
    }

    Node<T>* temp = head<T>;
    T tempVal = temp->data;

    head<T> = head<T>->next;

    delete temp;

    return tempVal;
}

// isEmpty
template <typename T>
bool isEmpty(){
    return head<T> == nullptr;
}

// TOP
template <typename T>
void Top(){

    if(isEmpty<T>()){
        std::cout << "Stack Underflow." << std::endl;
        return;
    }

    std::cout << "Top of Stack: "
              << head<T>->data
              << std::endl;
}

// Display All
template <typename T>
void displayALL(){

    if(head<T> == nullptr){
        std::cout << "Stack Underflow\n";
        return;
    }

    std::cout << "Displaying the stack:\n";

    Node<T>* temp = head<T>;

    while(temp != nullptr){
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }

    std::cout << std::endl;
}

#endif
