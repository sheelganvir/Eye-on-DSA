#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pge(vector<int> &arr){
    reverse(arr.begin(),arr.end());
    int n = arr.size();
    vector<int>output(n,-1);
    stack<int>st;
    st.push(0);
    for(int i=1 ; i<n ; i++){
       
        while(!st.empty() and arr[i]>arr[st.top()]){
            output[st.top()]=n-i-1; //because after reverse indices will be change
            st.pop();
        }
        st.push(i);
    }

    while(not st.empty()){  // not mandatory as we had already initialize the output array with -1
        output[st.top()] = -1;
        st.pop();
    }
    
    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());
    return output;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>result = pge(v);
    for(int i=0 ; i<result.size() ; i++){
        cout<<i-result[i]<<" ";
    }
    return 0;
}