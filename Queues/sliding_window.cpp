/*
    You are given an array of integers nums, there is a sliding window of size k 
    which is moving from very left of the array to the vey right. You can only
    see the k numbers in the window. Each time the sliding window moves rightwards
    by one position. Return the max sliding windows which is basically contains the
    max element in each window.
*/


#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int>maxSlidingWindow(vector<int>&nums, int k){
    deque<int> dq; // using double ended queue for keeping  
    vector<int>res;
    for(int i = 0 ; i < k ; i++){
        while(not dq.empty() and nums[dq.back()] < nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(nums[dq.front()]); // push front of dequeue to resultant vector
    for(int i = k ; i <nums.size() ; i++){
        int curr = nums[i];
        if(dq.front() == (i-k)) dq.pop_front();
        while(not dq.empty() and nums[dq.back()] < nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(nums[dq.front()]);
    }
    return res;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(-1);
    v.push_back(-3);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    vector<int>result = maxSlidingWindow(v, 3);
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
    return 0;
} 