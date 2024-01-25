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

class CircularLinkedList{
    public:

    Node* head;

    CircularLinkedList(){
        head = NULL;
    }

    void display(){
        Node* temp = head;
        do
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        } while (temp!=head);
        cout<<endl;
    }

    void insertAtEnd(int val){
       Node * new_node = new Node(val);
       if(head==NULL){
        head = new_node;
        new_node->next = head;
        return;
       }

       Node* tail = head;
       while(tail->next!=NULL){
        tail=tail->next;
       }
       // here tail is pointing to the last node

       tail->next = new_node;
       new_node->next = head;
    }
};

int main(){
    
    CircularLinkedList cll;
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);
    cll.insertAtEnd(6);

    cll.display();
    
    return 0;
}