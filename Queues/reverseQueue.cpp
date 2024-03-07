#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse(queue<int> &input){
    if (input.empty()) return ;
    stack<int> st;
    while(not input.empty()){
        st.push(input.front());
        input.pop();
    }
    while(not st.empty()){
        input.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> input;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    input.push(50);
    reverse(input);
    while(not input.empty()){
        cout<<input.front()<< " ";
        input.pop();
    }
    return 0;
}