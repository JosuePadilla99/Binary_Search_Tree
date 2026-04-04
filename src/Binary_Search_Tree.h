#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <iostream>
#include "Binary_Tree_Node.h"

class BinarySearchTree{
private:
    BinaryTreeNode* parent_node;
    BinaryTreeNode* move_left;
    BinaryTreeNode* move_right;

public:
    BinarySearchTree(){
        parent_node = new BinaryTreeNode();
        move_left = new BinaryTreeNode();
        move_right = new BinaryTreeNode();
        parent_node->setParentPtr(nullptr);
        move_left->setLeftPtr(nullptr);
        move_right->setRightPtr(nullptr);
    }

    void insert(int value);
    void findNode(BinaryTreeNode* node, int nodeValue);
    void preOrderTraversal(BinaryTreeNode* node);
    void inOrderTraversal(BinaryTreeNode* node);
    void postOrderTraversal(BinaryTreeNode* node);
    void findHeight(BinaryTreeNode* node);
};

#endif