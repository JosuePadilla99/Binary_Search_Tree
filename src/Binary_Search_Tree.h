#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <iostream>
#include "Binary_Tree_Node.h"

class BinarySearchTree{
private:
    BinaryTreeNode* root_node;
    BinaryTreeNode* move_left;
    BinaryTreeNode* move_right;

public:
    BinarySearchTree(){
        root_node = new BinaryTreeNode();
        move_left = new BinaryTreeNode();
        move_right = new BinaryTreeNode();
        root_node->setRootPtr(nullptr);
        move_left->setLeftPtr(nullptr);
        move_right->setRightPtr(nullptr);
    }

    BinaryTreeNode* getRootPtr() const;
    BinaryTreeNode* getLeftPtr() const;
    BinaryTreeNode* getRightPtr() const;

    void insert(int value);
    BinaryTreeNode* findNode(int nodeValue);
    void preOrderTraversal(BinaryTreeNode* node);
    void inOrderTraversal(BinaryTreeNode* node);
    void postOrderTraversal(BinaryTreeNode* node);
    void findHeight(BinaryTreeNode* node);
};

#endif