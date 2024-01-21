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

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        return;
    }

    void reverse(Node* &head, Node* &tail){

        Node* curr = head;
        while(curr){
            Node* nextPtr = curr->next;
            curr->next = curr->prev;
            curr->prev = nextPtr;
            curr = nextPtr;
        }

        //swapping head and tail
        Node* newHead = tail;
        tail = head;
        head = newHead; 
    }
};

int main(){
    
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.display();

    dll.reverse(dll.head, dll.tail);
    dll.display();
    
    return 0;
}