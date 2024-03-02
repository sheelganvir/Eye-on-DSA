/*
    Given head, the head of a linked list, determine if the linked list is a palindrome or not.

    A palindromic list is a list that remains the same when its nodes are reversed. 
    In other words, it has reflectional symmetry across a vertical axis.

    Hint: 1. Find the middle element.
          2. Break the linked lisst into 2.
          3. Reverse the second half of linked list.
          4. Compare the two parts of the linked list.
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

bool isPalindrome(Node* head){

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

    //4. Check if the two linked lists are equal
    Node* head1 = head;
    Node* head2 = prev;

    while(head2){
        if(head2->val!=head1->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;    
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

    cout<<isPalindrome(ll1.head)<<endl;
    
    return 0;
}