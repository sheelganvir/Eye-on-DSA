//A peak element is an element that is strictly greater than its neighbours.
//Given a 0-indexed integer array nums, find a peak element and returns its index.
//If the array contains multiple peaks, return the index of any of the peaks. You may imagine that nums[-1]=nums[n]=-infinity.
//In other words, the element is always considered to be strictly greater than a neighbour that is outside the array.

#include <iostream>
#include <vector>
using namespace std;

int findPeakInNeighbour(vector<int> &input){
    int n = input.size();
    int lo=0, hi=n-1;
    while (lo <= hi) {
        int mid = lo+(hi-lo)/2;
        if(mid==0){
            if(input[mid]>input[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(input[mid]>input[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(input[mid]>input[mid+1] and input[mid]>input[mid-1]){
                return mid;
            }
            else if(input[mid]>input[mid-1]){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
    }
    return -1;
}


int main(){
    
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<findPeakInNeighbour(input)<<endl;
    return 0;
}