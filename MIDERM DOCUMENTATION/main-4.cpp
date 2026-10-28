#include <iostream>
#include "binaryTree.h"


int main() {


    // Creating the root node
    BinaryTree<char>* root = new BinaryTree<char>('A');


    // Creating children of root node A
    root->insertLeftChild('B');
    root->insertRightChild('C');


    // Insert children to node B
    root->getLeftChild()->insertLeftChild('D');
    root->getLeftChild()->insertRightChild('F');


    // Insert child to node C
    root->getRightChild()->insertLeftChild('E');


    // Print the root node
    std::cout << "The Root: " << root->getRootVal() << std::endl;
    std::cout << "The Left child of root A: " << root->getLeftChild()->getRootVal() << std::endl;
    std::cout << "The Right child of root A: " << root->getRightChild()->getRootVal() << std::endl;


    std::cout << "The Left child of root B: "
          << root->getLeftChild()->getLeftChild()->getRootVal() << std::endl;


    std::cout << "The Right child of root B: "
          << root->getLeftChild()->getRightChild()->getRootVal() << std::endl;


    std::cout << "The Left child of root C: "
          << root->getRightChild()->getLeftChild()->getRootVal() << std::endl;

    
    return 0;

}






    


