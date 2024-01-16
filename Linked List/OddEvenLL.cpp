/*
    Given the head of a linked list, group all the node with odd indices together 
    followed by the nodes with even indices and return the the reordered list.
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

Node* oddEvenLL(Node* &head){

    Node* evenHead = head->next;
    Node* oddPtr = head;
    Node* evenPtr = head->next;

    while(evenPtr && evenPtr->next){
        oddPtr->next = oddPtr->next->next;
        evenPtr->next = evenPtr->next->next;
        oddPtr = oddPtr->next;
        evenPtr = evenPtr->next;
    }

    oddPtr->next = evenHead;
    return head;
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

    ll1.head = oddEvenLL(ll1.head);
    cout<<"Linked List after reorder \n";
    ll1.display();
    
    return 0;
}