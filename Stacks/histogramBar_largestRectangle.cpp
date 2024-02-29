/*
    Given an array of integer heights representing histogram's bar height where the width of each abr is 1,
    return the area of the largest rectangle in the histogram.
*/

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int>st;
    int ans = INT16_MIN;
    st.push(0);
    for(int i=1 ; i<n ; i++){
        while(!st.empty() and heights[i]<heights[st.top()]){
            int ele = heights[st.top()];
                st.pop();
            int nsi = i;
            int psi = (st.empty())? (-1) : st.top();
            ans = max(ans, ele*(nsi - psi - 1));
            
        }
        st.push(i);
    }
    

    while(not st.empty()){
        int ele = heights[st.top()];
            st.pop();
        int nsi = n;
        int psi = (st.empty())? (-1) : st.top();
        ans = max(ans, ele*(nsi - psi - 1));
        
    }
    return ans;
    
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
    int ans = largestRectangleArea(v);
    cout<<ans<<endl;
    return 0;
    
}