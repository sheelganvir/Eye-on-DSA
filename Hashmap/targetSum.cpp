/*
    Given an array of length of n and a target, return a pair whose sum is equal to the given target. 
    If there is no pair present, return -1.

    Input1: n = 7
            Elements = [1,4,5,11,13,10,2]
            Target = 13

    Output1: [3,6]

    Input2: n = 5
            Elements = [9,10,2,3,5]
            Target = 15

    Output2: [1,4] 

    ***********************************************************************************************
            Time complexity: O(n), n is the length of array
            Space complexity: O(n), n is the number of unique characters in string s1 and s2

    **********************************************************************************************


*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findPairWithSumTarget(vector<int>& v, int target){

    unordered_map<int,int> m;
    vector<int> ans(2,-1);

    for(int i=0 ; i<v.size() ; i++){
        if(m.find(target-v[i])!=m.end()){
            ans[0] = m[target-v[i]];
            ans[1] = i;
            return ans;
        }
        else{
            m[v[i]] = i;
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0 ; i<n ;i++){
        cin>>v[i];
    }

    int target;
    cin>>target;    

    vector<int> ans = findPairWithSumTarget(v, target);
    cout<<ans[0]<<", "<<ans[1]<<endl;

    return 0;
}