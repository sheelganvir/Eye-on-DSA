/*
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


void postorderTraversal(Node* rootNode){
    // base case
    if(rootNode==NULL){
        return;
    }
    // recursive call
    postorderTraversal(rootNode->right);
    cout << rootNode->value << " ";
    postorderTraversal(rootNode->left);
}


int main(){
    Node* root  = new Node(2);    
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left= new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11); 

    postorderTraversal(root);
    return 0;
    
}