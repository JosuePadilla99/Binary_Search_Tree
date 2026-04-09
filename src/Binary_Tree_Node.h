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
    BinaryTreeNode(){

    }
    BinaryTreeNode(int value){
        this->value = value;
        root = nullptr;
        right = nullptr;
        left = nullptr;
    }
    
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