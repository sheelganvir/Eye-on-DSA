/*
    We are given a stack data structure with push and pop operations, 
    the task is to implement a queue using instances of stack data structure 
    and operations on them.

    Here, we can do this with the below case:
    Pop efficient (dequeque) -> Time complexity : O(1) , push(enqueue) can be of bad complexity
*/

#include <iostream>
#include <stack>
using namespace std;

class Queue{
    stack<int> st;
public:
    Queue(){}

    void push(int x){   // queue.enqueue
     /*
        Time complexity: O(n)
    */
        stack<int> temp;
        while(not this->st.empty()){
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(x);
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }

    void pop(){     //queue.dequeue
    /*
        Time complexity: O(1)
    */
        if(this->st.empty()) return;
        this->st.pop();
    }

    bool empty(){
        return this->st.empty();
    }

    int front(){
    /*
        Time complexity: O(n)
    */
        if(this->st.empty()) return INT16_MIN;
        return this->st.top();
    }
};

int main(){
    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.pop();
    while(not qu.empty()){
        cout<<qu.front( )<<" ";
        qu.pop();
    }
    return 0;
}