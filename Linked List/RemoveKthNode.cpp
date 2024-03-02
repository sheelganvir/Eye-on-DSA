/*
    Given the heads of a linked list, remove the kth node from the end of
    the linked list and return its head. 
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

//assuming k is always less than/equal length of linked list
void delteKthNodeFromEnd(Node* &head, int k){

    Node* ptr1 = head;
    Node* ptr2 = head;

    //move ptr2 to k steps ahead of ptr1
    int count = k;
    while(count--){
        ptr2=ptr2->next;
    }

    if(ptr2==NULL){ //k is equal to the length of linked list
        Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }
    //now ptr2 is k steps ahead of ptr1
    //when ptr2 is at null (end of list), ptr1 will be at node to be deleteed
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    //now ptr1 is pointing to the node before kth node from the end
    // node to be deleted is ptr1->next
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}

int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4); 
    ll1.insertAtTail(5); 
    ll1.insertAtTail(6); 

    ll1.display();
    delteKthNodeFromEnd(ll1.head,5);
    ll1.display();
    return 0;
}