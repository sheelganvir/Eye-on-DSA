// A rotated sorted array is a sorted array on which rotation operation
//  has been performed some number of times. Given a rotated sorted
//  array, find the index of the minimum element in the array. Follow 0-based
//  indexing.
//  It is guaranteed that all the elements in the array are unique.
//  Input :
//  Array = [3, 4, 5, 1, 2]
//  Output :
//  3


#include <iostream>
#include <vector>
using namespace std;

int findMinInSorted(vector<int> &input){
    if(input.size()==1) return input[0];
    int lo=0;
    int hi = input.size()-1;
    if(input[lo]<input[hi]){
        return lo;
    }
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(input[mid]>input[mid+1]) return mid+1;
        if(input[mid]<input[mid-1]) return mid;
        if(input[mid]>input[lo]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
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
    
    cout<<findMinInSorted(input)<<endl;

    return 0;
}

//Time: O(log n)
//Space: O(1)