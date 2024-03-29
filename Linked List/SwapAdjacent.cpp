/*
    Given the head of a singly linked list, swap every two adjacent nodes and return its head. 
    You may not modify the values in the list's node. Only nodes themselves may be charged. 
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

Node* SwapAdjacent(Node* &head){
    
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //recursive case
    Node* secondNode = head->next;
    head->next = SwapAdjacent(secondNode->next);
    secondNode->next = head;    // reversing the link between first and second node
    return secondNode;
    
}

int main(){
    
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4); 
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    ll.head = SwapAdjacent(ll.head);
    ll.display();
    return 0;
}