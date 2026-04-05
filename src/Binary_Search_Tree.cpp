#include <iostream>
#include "Binary_Search_Tree.h"

using namespace std;

BinaryTreeNode* BinarySearchTree::getRootPtr()const {
    return root_node;
}

BinaryTreeNode* BinarySearchTree::getLeftPtr()const {
    return move_left;
}

BinaryTreeNode* BinarySearchTree::getRightPtr()const {
    return move_left;
}

void BinarySearchTree::insert(int value){
    BinaryTreeNode* newNode = new BinaryTreeNode(value);
    BinaryTreeNode* current = root_node;
    if(root_node == nullptr || root_node->getValue() == 0){
        root_node = newNode;
        return;
    }
    
    while(true){
        if(value > root_node->getValue()){
            if((current->getRightPtr() == nullptr) && (value > current->getValue())){ // Check to see if we are at a leaf node in the right subtree
                current->setRightPtr(newNode);
                return;
            }
            if((current->getLeftPtr() == nullptr) && (value < current->getValue())){
                current->setLeftPtr(newNode);
                return;
            }
            current = current->getRightPtr(); // Continue to traverse down the right subtree if we are not at a leaf node
        }
        else if(value < root_node->getValue()){
            if((current->getRightPtr() == nullptr) && (value > current->getValue())){ // Check to see if we are at a leaf node in the right subtree
                current->setRightPtr(newNode);
                return;
            }
            if((current->getLeftPtr() == nullptr) && (value < current->getValue())){
                current->setLeftPtr(newNode);
                return;
            }
            current = current->getLeftPtr(); // Continue to traverse down the left subtree if we are not at a leaf node
        }
        else{
            delete newNode; //ensuring we do not have a memory leak 
            return;
        }

    }
}

BinaryTreeNode* BinarySearchTree::findNode(int nodeValue){
    BinaryTreeNode* current = root_node;
    
    while(current != nullptr){
        if(current->getValue() == nodeValue){
            return current;
        }
        else if(nodeValue > current->getValue()){
            current = current->getRightPtr();
        }
        else{
            current = current->getLeftPtr();
        }
    }
    cout << "Node was not found in the binary search tree" << endl;
    return nullptr;
    

    // if(root == nullptr || root->getValue() == nodeValue){
    //     return root_node;
    // }

    // if(root->getValue() < nodeValue){
    //     //cout << "Test" << endl;
    //     return findNode(root->getRightPtr(), nodeValue);
    // }
    // //cout << "Test" << endl;
    // return findNode(root->getLeftPtr(), nodeValue);

}

void BinarySearchTree::preOrderTraversal(BinaryTreeNode* node){
    /*Conducting a preorder traversal of the binary search tree being root, left, right*/
    BinaryTreeNode* current = root_node;

    while(current != nullptr){
        cout << "Curent root is: " << current->getValue() << endl;
        
        if((current->getRightPtr() == nullptr) && (current->getLeftPtr() != nullptr)){
            current = current->getLeftPtr();
            cout << "Left node value is: " << current->getValue() << endl;    
        }

        if((current->getLeftPtr() == nullptr) && (current->getRightPtr() != nullptr)){
            current = current->getRightPtr();
            cout << "Right node is: " << current->getValue() << endl;
        }

        if((current->getLeftPtr() == nullptr) && (current->getRightPtr() == nullptr)){
            cout << "We have reached a leaf node" << endl;
            return;
        }
        current = current->getRootPtr();
                
    }
    // cout << "TEST" << endl;
    // if(current != nullptr){
    //     cout << "Current root node is: " << current->getValue() << endl;
    //     preOrderTraversal(current->getLeftPtr());
    //     cout << "Current left node is: " << current->getLeftPtr()->getValue() << endl; 
    //     preOrderTraversal(current->getRightPtr());
    //     cout << "Current right node is: " << current->getRightPtr()->getValue() << endl;  
    // }
}
