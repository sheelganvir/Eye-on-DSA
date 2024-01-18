/*
    Given head, the head of a linked list, reorder the Linked List.

    Before Reorder :  L0 -> L1 ->...-> Ln-1 -> Ln
    After Reorder : L0 -> Ln-> L1-> Ln-1 -> L2 -> Ln-2 ->...

    Hint: 1. Find the middle element.
          2. Break the linked list into 2.
          3. Reverse the second half of linked list.
          4. Combine the two linked list such that L0->Ln->L1->Ln-1->L2->Ln-2->...
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

Node* ReorderList(Node* head){

    //check if linked list has atleast 3 nodes.

    //1. Find the middle element
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    //now slow is pointing to middle element
    //2. Break the linked list in the  middle

    Node* curr = slow->next;
    Node* prev = slow;
    slow->next = NULL;

    //3. Reverse the second half of linked list
    while(curr){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    //4. Merging the two halfs of the linked list
    Node* head1 = head;
    Node* head2 = prev;

    while (head1!=head2)
    {
        Node* temp = head1->next;
        head1->next = head2;
        head1 = head2;
        head2 = temp;
    }
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

    ll1.head = ReorderList(ll1.head);
    cout<<"Reordered List: \n";
    ll1.display();
    
    return 0;
}