#include <iostream>
using namespace std;

class Stack{
    int capacity;
    int* array;
    int top;

    public:
    Stack(int c){
        this->capacity = c;
        array = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        this->top++;
        this->array[this->top] = data;
    }

    int pop(){
        if(this->top == -1){
            cout << "Stack Underflow" << endl;
            return INT16_MIN;
        }
        this->top--;
    }

    int top(){
        if(this->top == -1) {
            cout << "Stack Underflow" << endl;
            return INT16_MIN;
        }
        return this->array[this->top];
    }

    bool isEmpty(){
        return this->top == -1;
    }

    int size(){
        return this->top + 1;
    }

    bool  isFull() {
        return this->top == this->capacity - 1;
    } 
};

int main(){
    
    return 0;
}