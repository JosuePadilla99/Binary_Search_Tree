#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

#include <iostream>>


class BinaryTreeNode{
private:
   int value;
   BinaryTreeNode* parent;
   BinaryTreeNode* right;
   BinaryTreeNode* left;
public:
    BinaryTreeNode();
    BinaryTreeNode(int& value, BinaryTreeNode* left, BinaryTreeNode* right);
    
    //accessor methods
    int getValue() const {return value;}
    BinaryTreeNode* getParentPtr()const {return parent;}
    BinaryTreeNode* getLeftPtr()const {return left;}
    BinaryTreeNode* getRightPtr()const {return right;}

    //mutator methods
    void setValue(int setValue){value = setValue;}
    void setParentPtr(BinaryTreeNode* setParent){parent = setParent;}
    void setLeftPtr(BinaryTreeNode* setLeftPtr){left = setLeftPtr;}
    void setRightPtr(BinaryTreeNode* setRightPtr){right = setRightPtr;}

};


#endif