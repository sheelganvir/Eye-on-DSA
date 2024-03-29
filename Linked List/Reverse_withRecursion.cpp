/*
    *********** REVERSING A LINKED LIST ***********

    Given the head of a singly linked list, reverse the list and return the reverse list
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

Node* ReverseRecursion(Node* &head){
    
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //recursive case
    Node* new_head = ReverseRecursion(head->next);
    head->next->next=head;
    head->next=NULL;    //head is now pointing to last node in reversed ll
    return new_head;
}

int main(){
    
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    ll.head = ReverseRecursion(ll.head);
    ll.display();
    return 0;
}