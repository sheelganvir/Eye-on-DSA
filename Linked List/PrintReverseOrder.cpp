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

void printReverse(Node* &head){
    if(head==NULL){
        return;
    }
    // Recursively call for the rest of the linked list. The second parameter, prev is used to keep track of the node before
    printReverse(head->next);
    cout<<head->val<<" ";
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

    printReverse(ll.head);
    return 0;
}