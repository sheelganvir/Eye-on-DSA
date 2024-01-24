/*
    *********** TRAVERSING IN REVERSE ORDER ***********

    Given the head of a singly linked list, print the linked list in reverse order
*/


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

Node* partition(Node* head, int x) {
    Node *left = new Node(0);
    Node *right = new Node(0);
    
    Node *leftTail = left;
    Node *rightTail = right;
    
    while(head != NULL){
        if(head->val < x){
            leftTail->next = head;
            leftTail = leftTail->next;
        }
        else{
            rightTail->next = head;
            rightTail = rightTail->next;
        }
        head = head->next;
    }
    
    leftTail->next = right->next;
    rightTail->next = NULL;
    
    return left->next;
}

int main(){
    
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(8);
    ll.insertAtTail(4);
    ll.insertAtTail(7);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    partition(ll.head,7);
        ll.display();
    return 0;
}