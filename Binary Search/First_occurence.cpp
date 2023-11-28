//Find the first occurence of a given element x, given that the given array is sorted.

#include <iostream>
#include <vector>
using namespace std;

int First_occurence(vector<int>&input, int target){
    //define search space 
    int lo = 0; //start of the search space 
    int hi = input.size()-1;  // End of the search speace
    int ans=-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(input[mid]==target){
            ans=mid;
            hi=mid-1;
        }
        if(input[mid]<target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
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
    cout<<First_occurence(input,target)<<endl;

    return 0;
}

//Time: O(log n)
//Space: O(1)