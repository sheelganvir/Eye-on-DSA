/*
    An encoded string(s) is given, and the task is to decode it. The encoding pattern is that 
    the occurence of the string is given at the starting of the string and each string is 
    enclosed by square brackets
    Note: The occurence of a sngle string is less than 1000

    Input1: s = 1[b]
    Output1: b

    Input2: s = 3[b2[ca]]
    Output: bcacabcacabcaca

    Time: O(n), where n is the length of decoded string
    Space: O(n), where n is the length of decoded string
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    for(int i=0;i<nums1.size();i++){
        int max=-1;
        for(int j=0;j<nums2.size();j++){
            int index=j;
            int valueAtNums1 = nums1[i]; 
            int valueAtNums2 = nums2[j]; 
            if(nums1[i]==nums2[j]){ // Found element in nums2 that matches current element in nums1
                    while(index!=nums2.size()){ // Iterate through remaining elements in nums2 to find next greater element
                    if(nums2[index]>nums1[i]){
                        max=nums2[index]; // Update max if we find a greater element
                        break;
                    }
                    index++;
                }
            }
        }
        ans.push_back(max);
    }
    return ans;
}

int main(){
    
    vector<int>nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> ans = nextGreaterElement(nums1, nums2);
    return 0;
}