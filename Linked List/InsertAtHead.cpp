#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}   //Time complexity: O(1)

void display(Node* &head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

int main(){ 
    
    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    return 0;
}