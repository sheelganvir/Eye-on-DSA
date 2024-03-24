/*
    Given the root of a binary tree, return its maximum depth. A binary tree's maximum depth is
    the number of nodes along the longest path from the root node down to the farthest leaf node.
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

int maxDepth(Node* root) {

    //base case
    if(root == NULL) {
        return 0;
    }

    //recursive case
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    //The depth of the current node will

    return (max(leftDepth,rightDepth)+1);
}

int main(){

    Node* root  = new Node(2);    
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left= new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11); 

    cout<<maxDepth(root)<<endl;

    return 0;
}