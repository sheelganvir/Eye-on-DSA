/*
    ? Given an array of length of n, find the length of longest subarray with a sum equal to 0.

    Input1: n = 8
            arr = [15,-2,2,-8,1,7,10,23]

    Output1: 5

    Input2: n = 3
            arr = [1,2,3]

    Output2: 0

    ***********************************************************************************************
        !    Time complexity: O(n), n is the length of array
        !    Space complexity: O(n), n is the number of unique characters in string s1 and s2

    **********************************************************************************************


*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int maxLengthZeroSumSubarray(vector<int>& v){

    unordered_map<int,int> m;
    int prefixSum = 0;
    int maxLength = 0;

    for(int i=0 ; i<v.size() ; i++){
        prefixSum+=v[i];
        if(prefixSum==0){
            maxLength++;
        }
        if(m.find(prefixSum)!=m.end()){
            maxLength = max(maxLength , i - m[prefixSum]);
        }else{
            m[prefixSum] = i;
        }
    }
    return maxLength;
}

int main(){

    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0 ; i<n ;i++){
        cin>>v[i];
    }

    
    cout<<maxLengthZeroSumSubarray(v)<<endl;

    return 0;
}