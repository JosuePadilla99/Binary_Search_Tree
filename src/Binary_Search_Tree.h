#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <iostream>
#include <algorithm>
#include "Binary_Tree_Node.h"

class BinarySearchTree{
private:
    BinaryTreeNode* root_node;
    BinaryTreeNode* move_left;
    BinaryTreeNode* move_right;

public:
    BinarySearchTree(){
        root_node = nullptr;
        move_left = nullptr;
        move_right = nullptr;
    }
    
    BinaryTreeNode* getRootPtr() const;
    BinaryTreeNode* getLeftPtr() const;
    BinaryTreeNode* getRightPtr() const;

    void insert(int value);
    BinaryTreeNode* findNode(BinaryTreeNode* root, int nodeValue);
    void preOrderTraversal(BinaryTreeNode* node);
    void inOrderTraversal(BinaryTreeNode* node);
    void postOrderTraversal(BinaryTreeNode* node);
    int findHeight(BinaryTreeNode* node);
};

#endif