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



int main(){

    Node* root  = new Node(80);    
    return 0;
}