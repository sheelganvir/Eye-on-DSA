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

    void deleteSameNeighbourNode(Node* head, Node* tail){
        
        Node* currNode = tail->prev;
        while(currNode!=head){
            Node* prevNode = currNode->prev;
            Node* nextNode = currNode->next;
            if(prevNode->val==nextNode->val){
                // Need to delete curr node
                prevNode->next = nextNode;
                nextNode->prev = prevNode;
                free(currNode);
            }
            currNode=prevNode;
        }
    }
};

int main(){
    
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(2);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.display();

    dll.deleteSameNeighbourNode(dll.head, dll.tail);
    dll.display();

    return 0;
}