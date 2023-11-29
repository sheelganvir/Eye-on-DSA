// Given the rotated sorted array of integers, which contains distinct
// elements, and an integer target, return the index of target if it is in the
// array. Otherwise return-1.
// Input :
// Array = [3, 4, 5, 1, 2] , target = 4
// Output :
//  1


#include <iostream>
#include <vector>
using namespace std;

int binarySearchSortedRotated(vector<int>&input,int target){
    int lo=0, hi=input.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(input[mid]==target) return mid;
        if(input[mid]>=input[lo]){
            if(target>input[lo] and target<=input[mid]){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }else{
            if(target>=input[mid] and target<=input[hi]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
    }
    return  -1;
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
    
    cout<<binarySearchSortedRotated(input,target)<<endl;

    return 0;
    return 0;
}