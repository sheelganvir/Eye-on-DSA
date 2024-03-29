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

    bool isPalindrome(Node* head, Node* tail){
        if(head == NULL || head == tail)return true;

        while(head!=tail && tail!=head->prev){
            if(head->val!=tail->val){
                return false;
            }
            head=head->next;
            tail=tail->prev;
        }
        return true;
    }
};

int main(){
    
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.display();

    cout<<dll.isPalindrome(dll.head, dll.tail);
    
    return 0;
}