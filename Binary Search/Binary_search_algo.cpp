// Target search problem with BINARY SEARCH ALGORITHM

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>&input, int target){
    //define search space 
    int lo = 0; //start of the search space 
    int hi = input.size()-1;  // End of the search speace

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(input[mid]==target)
            return mid;
        if(input[mid]<target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
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
    int target;
    cin>>target;
    cout<<BinarySearch(input,target)<<endl;

    return 0;
}

// Time Complexity: O(log n)
// Space Complexity: O(1)
 