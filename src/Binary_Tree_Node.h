#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

#include <iostream>


class BinaryTreeNode{
private:
   int value;
   BinaryTreeNode* root;
   BinaryTreeNode* right;
   BinaryTreeNode* left;
public:
    BinaryTreeNode(): value(0){}
    BinaryTreeNode(int& val): value(val){}
    //BinaryTreeNode(int& value, BinaryTreeNode* left, BinaryTreeNode* right);

    /*Doing some accessor and mutator method manipulation in the header file 
    to limit redundancy in the Binary_Search_Tree.cpp file*/

    //accessor methods
    int getValue() const{return value;}
    BinaryTreeNode* getRootPtr()const {return root;}
    BinaryTreeNode* getLeftPtr()const {return left;}
    BinaryTreeNode* getRightPtr()const {return right;}

    //mutator methods
    void setValue(int setValue) {value = setValue;}
    void setRootPtr(BinaryTreeNode* setRoot) {root = setRoot;}
    void setLeftPtr(BinaryTreeNode* setLeftPtr) {left = setLeftPtr;}
    void setRightPtr(BinaryTreeNode* setRightPtr) {right = setRightPtr;}

};


#endif