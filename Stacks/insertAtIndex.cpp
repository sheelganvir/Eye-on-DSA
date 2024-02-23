/*
    Insert at bottom 
*/

#include <iostream>
#include <stack>
using namespace std;

void insertAtIndex(stack<int> &st, int x, int idx){
    /*
        time: O(n)
        space: O(n)
    */
    stack<int>temp;
    int n = st.size();
    int count = 0;
    while(count < n - idx){
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()) {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}


int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtIndex(st,10,3);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}