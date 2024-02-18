/*
    Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

    Implement the MinStack class:

    MinStack() initializes the stack object.
    void push(int val) pushes the element val onto the stack.
    void pop() removes the element on the top of the stack.
    int top() gets the top element of the stack.
    int getMin() retrieves the minimum element in the stack.
    You must implement a solution with O(1) time complexity for each function.

*/

#include <iostream>
#include <stack>
#define ll long long int 
using namespace std;
class MinStack {
public:
    stack<ll>st;
    ll min;
    MinStack() {
        this->min = INT16_MAX;
    }
    
    void push(int val) {
        if(this->st.empty()){
            this->min = val;
            this->st.push(val);
        }else{
            this->st.push(val-this->min);
            if(this->min > val){
                this->min = val;
            }
        }
    }
    
    void pop() {
        if(not this->st.empty()){
            if(this->st.top()>=0){
                this->st.pop();
            }else{
                this->min = this->min - this->st.top();
                this->st.pop();
            }
        }
    }
    
    
    int top() {
        if(this->st.size() == 1){
            return this->st.top();
        }else if(this->st.top() < 0){
            return this->min;
        }else{
            return this->min + this->st.top();
        }
    }
    
    int getMin() {
        return this->min;
    }  
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */