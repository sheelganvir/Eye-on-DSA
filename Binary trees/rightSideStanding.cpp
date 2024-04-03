/*
    Given the root of a binary tree, imagine yourself standing on the right side of it, return 
    the values of the nodes you can see from top to bottom.

    Hint: We have to print rightmost node.

Example:
                2
              /   \
            4      10                (^^)
           / \       \              \(#)/
          6   5       11             | |    
           \                         " "
            12   

Output: 2 10 11 12 
*/


#include <iostream>
#include <queue>
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

vector<int> rightViewBinaryTree(Node* root){
    // base case
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        int nodesAtCurrentLevel = q.size();
        while(nodesAtCurrentLevel){

            Node* currNode = q.front();
            q.pop();

            if(nodesAtCurrentLevel==1){
                ans.push_back(currNode->value);
            }

            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
            nodesAtCurrentLevel--;
        }
    }
    return ans;
}
int main(){

    Node* root  = new Node(2);    
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left= new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11); 
    root->left->left->right= new Node(12);

    vector<int> ans = rightViewBinaryTree(root);
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}