/*
Given an integer array arr, move all O's to the end of it while
maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Input: 0 5 0 3 42
Output: 5 3 42 0 0

Aproach --> Bubble sort

*/

#include <iostream>
#include<vector>
using namespace std;

void swapZeroesToEnd(vector<int> &v){
    bool flag = false;
    int n = v.size();
    for (int i=0 ;i<n-1; i++){
        for(int j=0 ; j< n-i-1 ; j++){
            if(v[j]==0 && v[j+1]!=0){
                flag= true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
    }
    return;
}

int main(){
    
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n ; i++){
        cin>>v[i];
    }

    swapZeroesToEnd(v);

    for(int i=0; i<n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}

