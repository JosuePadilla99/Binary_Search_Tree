#include <iostream>
#include "Binary_Search_Tree.h"
#include <string>

using namespace std;
int main(){
    BinarySearchTree utilObj;
    string prompt;
    string start;
    int caseNum;

    utilObj.insert(10);
    utilObj.insert(5);
    utilObj.insert(6);
    utilObj.insert(16);
    utilObj.insert(4);
    utilObj.insert(19);
    utilObj.insert(17);
    utilObj.insert(21);
    
    cout << "Node that was found is: " << utilObj.findNode(utilObj.getRootPtr(), 5)->getValue() << endl;
    utilObj.preOrderTraversal(utilObj.getRootPtr());
    utilObj.inOrderTraversal(utilObj.getRootPtr());
    utilObj.postOrderTraversal(utilObj.getRootPtr());
    int height = utilObj.findHeight(utilObj.getRootPtr());
    cout << "Height of BST is: " << height << endl;

    // cout << "Would you like to start the program" << endl;
    // cin >> start;
    
    // if(start == "yes"){
    //     while(prompt == "yes"){
    //     cout << "Do you want to conduct a binary search tree function? Type 'yes' to continue or 'no' to end the program" << endl;
    //     cin >> prompt;
    //     cout << "Enter a number 1-4 to conduct a binary search tree function" << endl;
    //     cout << "Enter 1 to insert a new node" << endl;
    //     cout << "Enter 2 to find a certain node based on the value" << endl;
    //     cout << "Enter 3 to conduct a traversal" << endl;
    //     cout <<"Enter 4 to find the height of the tree" << endl;
    //     cout << "Enter 0 to end the program" << endl;
    //     cin >> caseNum;
    //     if(caseNum == 0){
    //         break;
    //     }
    
    //     switch(caseNum){
    //         case 1:
    //             utilObj.insert(10);
    //             break;
    //         }
    //     }

    // }

    return 0;

}