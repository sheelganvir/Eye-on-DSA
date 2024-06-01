/*
    An encoded string(s) is given, and the task is to decode it. The encoding pattern is that 
    the occurence of the string is given at the starting of the string and each string is 
    enclosed by square brackets
    Note: The occurence of a sngle string is less than 1000

    Input1: s = 1[b]
    Output1: b

    Input2: s = 3[b2[ca]]
    Output: bcacabcacabcaca

    Time: O(n), where n is the length of decoded string
    Space: O(n), where n is the length of decoded string
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int maxDepth(string s) {
    int count=0;
    int max=INT16_MIN;
    stack<char>st;
    for(auto i:s)
    {
        if(i=='(')
        {
            st.push(i);
            count++;
        }
        if(i==')'){
            st.pop();
            count=st.size();
        }
        if(count>max)
        max=count; 
    }
    return max;
}

int main(){
    
    string str = "(1+(2*3)+((8)/4))+1";

    cout<<maxDepth(str);
    return 0;
}