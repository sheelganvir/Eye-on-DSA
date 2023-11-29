// Given an array of integers 'a' that is sorted in non-decreasing order. Find the first and
// the last position of the given target element in the sorted array. Follow 0-based
// indexing.
// If target is not found in the array, return [-1,-1].
// Input:
// Array = [1, 2, 3, 3, 3, 5, 11] . target = 3
// Output :
//  [2,4]

#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int>&input, int target){
    //define search space 
    int lo = 0; //start of the search space 
    int hi = input.size()-1;  // End of the search speace
    int ans=-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(input[mid]>=target){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo = mid + 1;
        }
    }
    return ans;
}

int upperbound(vector<int>&input, int target){
    //define search space 
    int lo = 0; //start of the search space 
    int hi = input.size()-1;  // End of the search speace
    int ans=-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(input[mid]>target){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo = mid + 1;
        }
    }
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int target;
    cin>>target;
    
    vector<int>result;
    int lb = lowerbound(input, target);
    if(input[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
    }
    else{
        int up=upperbound(input,target);
        result.push_back(lb);
        result.push_back(up-1);
    }
    cout<<"["<<result[0]<<","<<result[1]<<"]";
    return 0;
}

//Time: O(log n)
//Space: O(1)