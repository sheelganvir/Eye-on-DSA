/*
    Given two linked list tell if they arre equall or not. 
    Two linked lists are equal if they have the same data and
    the arrangement of the data is also same.
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

bool CheckEqualLL(Node* head1, Node* head2){

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val != ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    //at this point either ptr1 is null, or ptr2 is null, or both are null
    return (ptr1==NULL && ptr2==NULL);
}

int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4); 

    LinkedList ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.insertAtTail(4); 
    
    ll1.display();
    ll2.display();

    cout<<CheckEqualLL(ll1.head, ll2.head);
    return 0;
}