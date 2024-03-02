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

Node* Reverse(Node* &head){
    Node* prev = NULL;
    Node* current = head;

    //curr->next = prev
    //move all 3 pointers by one step ahead
    while(current!=NULL){
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    //when this loop ends, prev pointer pointing to my last node which is new head
    Node* new_head = prev;
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

    ll.head = Reverse(ll.head);
    ll.display();
    return 0;
}