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

    void pop(){
        if(this->top == -1){
            cout << "Stack Underflow" << endl;
        }
        this->top--;
    }

    int getTop(){
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
    Stack  st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    cout<<st.getTop()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.size()<<endl;
    cout<<st.isFull()<<endl;
    return 0;
}