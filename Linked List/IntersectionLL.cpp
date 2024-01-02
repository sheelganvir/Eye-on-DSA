/*
    Given the heads of two singly headA headB, return the node 
    at which the two lists intersect. If the two linked lists have no intersection at all,
    return null.
*/


#include <iostream>
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


int getLength(Node* head){

    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}


Node* moveHeadByK(Node* head, int k){
    Node* ptr = head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;
}

Node* getIntersection(Node* head1, Node* head2){
    //step1: calculate lenghts of both thee linked list
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    //step2: find the differene k between linkedlist and move longer linkedlist ptr by k steps ahead
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){  //ll1 is longer
        int k = l1-l2;
        ptr1 = moveHeadByK(head1, k);
        ptr2 = head2;
    }else{  //ll2 is longer
        int k =l2-l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2, k );
    }
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}


int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4); 
    ll1.insertAtTail(5); 
    ll1.insertAtTail(6); 


    LinkedList ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(20);
    
    ll2.head->next->next = ll1.head->next->next->next;
 
    
    ll1.display();  //1->2->3->4->5->6->NULL
    ll2.display();  //6->20->4->5->6->NULL

    Node* intersection = getIntersection(ll1.head, ll2.head);

    if(intersection){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}