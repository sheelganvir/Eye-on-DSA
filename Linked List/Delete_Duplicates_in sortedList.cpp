/*
    Given the head of the linked list, delete all duplicates such that each 
    element appears only once. Return the linked list sorted as well.
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

void deleteDuplicate(Node* &head){
    Node* curr_node = head;
    while(curr_node){   // this means: curr_node!=NULL
        if(curr_node->next!=NULL && curr_node->val == curr_node->next->val){
            Node* del_node = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(del_node);
        }
        else{
            curr_node = curr_node->next;
        }
    }
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

    deleteDuplicate(ll.head);
    ll.display();
    return 0;
}