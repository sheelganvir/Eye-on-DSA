/*
    Find the middle element of the given linked list.
*/



#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    bool visited;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }

        Node *temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;
    }

    void display(){ 
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        } 
        cout << "NULL"<<endl;
    }
};

Node* findMiddleNode(Node* &head){

    Node* slow = head;
    Node* fast = head;

    while (fast!=NULL && fast->next!=NULL)
    {   
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4); 
    ll1.insertAtTail(5); 
    ll1.insertAtTail(6); 

    Node* middleNode = findMiddleNode(ll1.head);
    cout<<middleNode->val<<endl;
    return 0;
}
