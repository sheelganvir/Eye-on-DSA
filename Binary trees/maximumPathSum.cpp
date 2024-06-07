/*
?    Given the root of a binary tree and an integer targetSum, return the number of paths 
?    where the sum of the values along the path equals targetSum.                         

!    The path does not need to start or end at the root or a leaf,                        
!    but it must go downwards (i.e., traveling only from parent nodes to child nodes).    

*/
#include <iostream>
#include <unordered_map>
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

int maxPathSumHelper(Node* root, int& maxSum){
    if(root==NULL){
        return 0;
    }

    int leftMaxSum = max(0,maxPathSumHelper(root->left, maxSum));
    int rightMaxSum = max(0,maxPathSumHelper(root->right, maxSum));

    maxSum = max(maxSum, root->value + leftMaxSum + rightMaxSum);
    return root->value + max(leftMaxSum, rightMaxSum);
}

int maxPathSum(Node* root) {
    int maxSum = INT16_MIN;
    maxPathSumHelper(root, maxSum);
    return maxSum;
}

int main(){
    Node* root  = new Node(10);    
    root->left = new Node(5);
    root->right = new Node(-3);
    root->left->left= new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(11); 
    root->left->left->left = new Node(3);
    root->left->left->right = new Node(-2);
    root->left->right->right = new Node(1);
    cout<<maxPathSum(root)<<endl;
    return 0;
}