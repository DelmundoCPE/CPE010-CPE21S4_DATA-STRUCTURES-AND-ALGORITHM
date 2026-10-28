#ifndef BINARYTREE_H
#define BINARYTREE_H


template <typename T>
class BinaryTree {
private:
    T key;


    BinaryTree<T>* leftChild;
    BinaryTree<T>* rightChild;


public:
    // Constructor
    BinaryTree(T rootObj);


    // Inserting child nodes
    void insertLeftChild(T newNode);
    void insertRightChild(T newNode);


    BinaryTree<T>* getLeftChild();
    BinaryTree<T>* getRightChild();


    T getRootVal();
};

template <typename T>
BinaryTree<T>::BinaryTree(T rootObj) {
    key = rootObj;
    leftChild = nullptr;
    rightChild = nullptr;
}


template <typename T>
void BinaryTree<T>::insertLeftChild(T newNode) {
    leftChild = new BinaryTree<T>(newNode);
}

template <typename T>
void BinaryTree<T>::insertRightChild(T newNode) {
    rightChild = new BinaryTree<T>(newNode);
}

template <typename T>
BinaryTree<T>* BinaryTree<T>::getLeftChild() {
    return leftChild;
}


template <typename T>
BinaryTree<T>* BinaryTree<T>::getRightChild() {
    return rightChild;
}


template <typename T>
T BinaryTree<T>::getRootVal() {
    return key;
}


#endif



