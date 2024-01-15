/*
    Given head, the head of a linked list, rotate the list to the right by k places.
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

Node* rotateByK(Node* &head, int k){

    //1. find length of ll
    int n=0;
    //2. find tail node
    Node * tail = head;
    while(tail->next != NULL){
        n++;
        tail = tail -> next;
    }
    n++; //including the last node

    k = k%n;
    if(k==0){
        return head;
    }

    tail->next = head;

    //3. Traversee n-k nodes
    Node* temp = head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }
    
    Node* newHead = temp->next;
    temp->next=NULL;
    return newHead;

}

int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4); 
    ll1.insertAtTail(3); 
    ll1.insertAtTail(2); 
    ll1.insertAtTail(1); 

    ll1.display();

    ll1.head = rotateByK(ll1.head, 4);
    cout<<"Linked List after rotation: \n";
    ll1.display();
    
    return 0;
}