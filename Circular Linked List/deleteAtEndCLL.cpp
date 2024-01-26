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
    
    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            new_node->next = head;   // circular linked list
            return;
        }

        Node* tail = head;
        while(tail->next != head){
            tail=tail->next;
        }
        // now tail is pointing to the last node

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val){
       Node * new_node = new Node(val);
       if(head==NULL){
        head = new_node;
        new_node->next = head;
        return;
       }

       Node* tail = head;
       while(tail->next!=head){
        tail=tail->next;
       }
       // here tail is pointing to the last node

       tail->next = new_node;
       new_node->next = head; 
    }

    void deleteAtEnd(){
        if(head==NULL) return;
        Node* temp = head;
        while(temp->next->next!= head){
            temp=temp->next;
        }
        //now temp is pointing to the one node before the last node
        Node* tail = temp->next;
        temp->next = head;
        free(tail);
    }
};

int main(){
    
    CircularLinkedList cll;
    cll.insertAtStart(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);
    cll.insertAtEnd(6);

    cll.display();
    cll.deleteAtEnd();
    cout<<"After deleting the last element: "<<endl;
    cll.display();

    return 0;
}