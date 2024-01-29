/*
    Remove from bottom
*/

#include <iostream>
#include <stack>
using namespace std;

void removeFromBottom(stack<int> &st){
    
    stack<int>temp;
    while(not st.empty()){
        if(st.size()==1){
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
    removeFromBottom(st);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}