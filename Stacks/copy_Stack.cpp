/*
    Copy contents of one stack to another in same order
*/

#include <iostream>
#include <stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int>temp;
    while(not input.empty()){
        // do the process till the time input stack doesn't becaome empty
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }

    stack<int>result;
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();

        result.push(curr);
    }
    

    return result;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int>res = copyStack(st);
    
    while(not res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}