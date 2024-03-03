/*
    Conversion of a prefix expression  to infix expression.

    prefix: * + 3 2 - 1 5   -->   (3+2) * (1-5)
    postfix: 3 2 + 1 5 - *  -->   (3+2) * (1-5)

*/
#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>

using namespace std;

int calc(int v1, int v2, int op){
    if(op == '^'){
        return pow(v1, v2);
    }
    if(op == '*'){
        return v1*v2;
    }
    if(op == '+'){
        return v1+v2;
    }
    if(op == '/'){
        return v1/v2;
    }
    return v1-v2;
}


string eval(string &pre){
    stack<string>st;
    reverse(pre.begin(), pre.end()); 
    for(int i=0 ; i<pre.size() ; i++){
        if(isdigit(pre[i])){
            st.push(to_string(pre[i] - '0'));
        } 
        else{
            string v1 = st.top();
            st.pop();
            string v2 = st.top();
            st.pop();
            string newexp = v1 + v2 +  pre[i];
            st.push(newexp);
        }
    }
    return st.top();
}

int main(){
    string str = "*+32-15";
    cout<<eval(str)<<endl;
    return 0;
}