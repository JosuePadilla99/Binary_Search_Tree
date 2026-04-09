#include <iostream>
#include "Binary_Search_Tree.h"

void constructMinHeightBST(BinarySearchTree&, int*, int, int);

using namespace std;
int main(){
    BinarySearchTree utilObj;
    int userInput{0};
    int arraySize{0};
    int i{0};

    cout << "Enter the size number of values you want in the binary search tree: ";
    cin >> arraySize;
    cin.ignore();

    int* bstArray = new int[arraySize]; // using a dynamically sizable array for user flexibility

    while(i < arraySize){
        cout << "Enter the value of the node you want to add to the binary search tree in ascending order or type '-1' to end loop: " << endl;
        cin >> userInput;
        if(userInput == -1){
            break;
        }
        bstArray[i] = userInput;
        i++;
    }

    // constructing the minimum height binary search tree
    constructMinHeightBST(utilObj, bstArray, 0, i - 1); // we can use i since we have incremented it by the arraySize
   
    // Calculating BST height
    int height = utilObj.findHeight(utilObj.getRootPtr());
    cout << "Height of BST is: " << height << endl;

    // Printing traversal types
    utilObj.inOrderTraversal(utilObj.getRootPtr());
    utilObj.preOrderTraversal(utilObj.getRootPtr());
    utilObj.postOrderTraversal(utilObj.getRootPtr());

    return 0;
}

void constructMinHeightBST(BinarySearchTree& bstObj, int* arr, int start, int end){
    if(start > end){
        return;
    }
    cout << "TEST" << endl;
    int mid = (start + end) /2;
    bstObj.insert(arr[mid]);

    constructMinHeightBST(bstObj, arr, start, mid - 1); // inserting left half of tree
    constructMinHeightBST(bstObj, arr, mid + 1, end); //inserting right half of tree
}