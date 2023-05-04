//Given an integer array "a", returns the prefix sum/ running sum in the same array without creating a new array

#include <iostream>
#include <vector> 
using namespace std;

void runningSum(vector<int> &v){

    for(int i=1 ; i<v.size() ; i++){
        v[i]+= v[i-1];
    }
}
int main(){
    int n;
    cin>> n;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>> ele;
        v.push_back(ele);
    }
    
    runningSum(v);
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}