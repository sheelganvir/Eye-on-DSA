/*
    Given the root of a binary tree, return the number of leaf nodes present in it. 
    A leaf node is a node which has no left and right child.
*/

#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node* left;
    Node* right;

    Node(int v){
        value = v;
        left = right = NULL;
    }
};

int leafNodes(Node* root) {

    //base case
    if(root == NULL) {
        return 0;
    }
    if(root->left==NULL && root ->right==NULL) {
        return 1;
    }

    //recursive case
    int leftLeafNodes = leafNodes(root->left);
    int rightLeafNodes = leafNodes(root->right);
    //The depth of the current node will

    return (leftLeafNodes+rightLeafNodes);
}

int main(){

    Node* root  = new Node(2);    
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left= new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11); 

    cout<<leafNodes(root)<<endl;

    return 0;
}