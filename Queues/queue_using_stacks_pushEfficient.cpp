/*
    We are given a stack data structure with push and pop operations, 
    the task is to implement a queue using instances of stack data structure 
    and operations on them.

    Here, we can do this with the below case:

    1) Push efficient (enqueque) -> Time complexity : O(1) , pop(dequeue) can be of bad complexity
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
        Time complexity: O(1)
    */
        this->st.push(x);
    }

    void pop(){     //queue.dequeue
    /*
        Time complexity: O(n)
    */
        if(this->st.empty()) return;
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        // now stack size is 1, and we are at the bottom element
        this->st.pop();
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }

    bool empty(){
        return this->st.empty();
    }

    int front(){
    /*
        Time complexity: O(n)
    */
        if(this->st.empty()) return -1;
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        // now stack size is 1, and we are at the bottom element
        int res = this->st.top();
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return res;
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