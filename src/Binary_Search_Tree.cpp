#include <iostream>
#include <algorithm>
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
    if(root_node == nullptr){
        root_node = newNode;
        return;
    }
    
    while(true){
        if(value > current->getValue()){
            if(current->getRightPtr() == nullptr){
                current->setRightPtr(newNode);
                return;
            }
            current = current->getRightPtr(); // continue to traverse right if condition is not met
        }
        else if(value < current->getValue()){
            if(current->getLeftPtr() == nullptr){
                current->setLeftPtr(newNode);
                return;
            }
            current = current->getLeftPtr(); // continue to traverse left if condition is not met
        }
        else{
            //delete newNode;
            return;
        }
        
    }
}

BinaryTreeNode* BinarySearchTree::findNode(BinaryTreeNode* root, int nodeValue){
    if(root == nullptr || root->getValue() == nodeValue){
        return root;
    }

    if(root->getValue() < nodeValue){
        
        return findNode(root->getRightPtr(), nodeValue);
    }
    
    return findNode(root->getLeftPtr(), nodeValue);
}

void BinarySearchTree::preOrderTraversal(BinaryTreeNode* root){
    if(root == nullptr){
        return;
    }
    cout << "Current node value for preOrderTraversal is: " << root->getValue() << endl;
    preOrderTraversal(root->getLeftPtr());
    preOrderTraversal(root->getRightPtr());
}

void BinarySearchTree::inOrderTraversal(BinaryTreeNode* root){
    if(root == nullptr){
        return;
    }
    inOrderTraversal(root->getLeftPtr());
    cout << "Current node value for inOrderTraversal is: " << root->getValue() << endl;
    inOrderTraversal(root->getRightPtr());
}

void BinarySearchTree::postOrderTraversal(BinaryTreeNode* root){
    if(root == nullptr){
        return;
    }
    postOrderTraversal(root->getLeftPtr());
    postOrderTraversal(root->getRightPtr());
    cout << "Current node value for postOrderTraversal is: " << root->getValue() << endl;
}

int BinarySearchTree::findHeight(BinaryTreeNode* root){
    if(root == nullptr){
        return -1;
    }
    int leftSubTreeHeight = findHeight(root->getLeftPtr());
    int rightSubTreeHeight = findHeight(root->getRightPtr());

    return max(leftSubTreeHeight, rightSubTreeHeight) + 1; // we are using the max function to find the taller of the subtrees since we need this for the height calculation
}