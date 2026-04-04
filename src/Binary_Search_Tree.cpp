#include <iostream>
#include "Binary_Search_Tree.h"

using namespace std;

BinaryTreeNode* BinarySearchTree::getParentPtr()const {
    return parent_node;
}

BinaryTreeNode* BinarySearchTree::getLeftPtr()const {
    return move_left;
}

BinaryTreeNode* BinarySearchTree::getRightPtr()const {
    return move_left;
}

void BinarySearchTree::insert(int value){
    BinaryTreeNode* newNode = new BinaryTreeNode(value);
    BinaryTreeNode* current;
    if(parent_node == nullptr){
        parent_node = newNode;
    }

    if(value > parent_node->getValue()){
        while(move_right->getRightPtr() != nullptr){
            current = move_right;
        }
        current->setRightPtr(newNode);
    }
    else if(value < parent_node->getValue()){
        while(move_left->getLeftPtr() != nullptr){
            current = move_left;
        }
        current->setLeftPtr(newNode);
    }
    else{
        cout << "Value entered is most likely equal to parent node. Please enter a valid value" << endl;
        return;
    }

    cout << "Successfully inserted node in the binary tree" << endl;
}
