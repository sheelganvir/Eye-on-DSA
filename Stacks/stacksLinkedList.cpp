#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;

    public:
    Stack(int c){
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }

    bool isEmpty(){
        return this->head == NULL;
    }

    bool isFull(){
        return this->currSize == this->capacity;
    }

    void push (int x) {
        if(this->currSize == this->capacity){
            cout << "Stack Overflow" << endl;
            return;
        }
        Node* new_node = new Node(x);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }

    int pop(){
        if(this->head == NULL){
            cout << "Stack Underflow" << endl;
            return INT16_MIN;
        }
        Node* new_head = this->head->next;
        this->head->next = NULL;
        Node* tobeRemoved = this->head;
        int result = tobeRemoved->data;
        free(tobeRemoved);
        this->head = new_head;
        return result;
    }

    int getTop(){
        if(this->head == NULL){
            cout << "Stack Underflow" << endl;
            return INT16_MIN;
        }
        return this->head->data;
    }

    int size(){
        return this->currSize;
    }
};

int main(){
    
    Stack  st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.pop()<<endl;
    cout<<st.getTop()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.size()<<endl;
    cout<<st.isFull()<<endl;
    return 0;
}