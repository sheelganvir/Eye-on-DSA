#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& nums, int target) {
    //write the swap function to sort the given vector
    int count=0;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int position =0;
    for(int i=0; i<n; i++){
        if(nums[i]==target){
            position=i;
        }
    }
    for(int j=0; j<position; j++){
        for(int i=j+1; i<=position; i++){
            if(nums[i]+nums[j]==target){
                count++;
            }
        }
    }
    for (int i =position+1 ; i<n ; i++){
        for(int j=0; j<position; j++){
            if(nums[i]+nums[j]==target){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target ;
    cin>>target;

    cout<<countPairs(v, target);
    return 0;
}