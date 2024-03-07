#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
    }

    void enqueue(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL){
            // ll is empty
            this->head = this->tail = newNode;
        }else{
            tail->next = newNode;
            newNode->next = NULL;
            tail = newNode;

        }
    }
};

int main(){
    
    return 0;
}