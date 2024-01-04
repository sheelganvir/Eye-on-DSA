/*
    Given head, the head of a linked list, determine if the linked list has cycle in it.
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

bool detectCycle(Node* head){

    if(!head){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4); 
    ll1.insertAtTail(5); 
    ll1.insertAtTail(6); 
    ll1.insertAtTail(7); 
    ll1.insertAtTail(8); 

    ll1.display();

    ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
    cout<<detectCycle(ll1.head)<<endl;    
    
    return 0;
}