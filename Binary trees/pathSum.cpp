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

int pathSumHelper(Node* root, int targetSum, long int currSum, unordered_map<long int, int> pathCount) {
    if(root==NULL){
        return 0;
    }

    currSum += root->value;
    int ansCount = pathCount[currSum-targetSum];

    pathCount[currSum]++;
    ansCount += pathSumHelper(root->left, targetSum, currSum, pathCount) + pathSumHelper(root->right, targetSum, currSum, pathCount);

    pathCount[currSum]--;
    return ansCount;

}

int pathSum(Node* root, int targetSum) {
    unordered_map<long int, int> pathCount;
    pathCount[0] = 1;
    return pathSumHelper(root, targetSum, 0, pathCount);
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
    cout<<pathSum(root, 8)<<endl;
    return 0;
}