#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* prev;
    Node* next;
    
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }cout<<endl;
    }

    void insertAtStart(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    void deleteAtStart(){
        if(head == NULL)return ;

        Node* temp = head;
        head = head->next;
        if(head==NULL){ //if doubly linkeed list had only 1 node
            tail=NULL;
        }else{
            head->prev = NULL;
        }
        free(temp);
        return;
    }
};

int main(){
    
    DoublyLinkedList dll;
    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);
    dll.display();

    dll.deleteAtStart();
    cout << "After deleting the element at start : ";
    dll.display();

    return 0;
}