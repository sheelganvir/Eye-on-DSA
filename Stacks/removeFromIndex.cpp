/*
    Remove from Index
*/

#include <iostream>
#include <stack>
using namespace std;

void removeFromIndex(stack<int> &st, int idx){
    
    stack<int>temp;
    while(not st.empty()){
        if(st.size()==idx){
            st.pop();
            break;
        }
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
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
    removeFromIndex(st,3);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}