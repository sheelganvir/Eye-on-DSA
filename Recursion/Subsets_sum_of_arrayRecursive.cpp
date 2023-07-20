/*Given an array of integers, print sums of all subsets in it. Output sums can be printed in any order.
Input : arr[] = {2, з}
Output : 0 2 3 5
Input : arr[] = {2,4,5}
Output:0 2 4 5 6 7 9 11

Hint: Total subsets for a set of length n = 2^n

f(arr,n,idx,sum,result) = f(arr,n,idx+1,sum+arr[idx],result)
                          f(arr,n,idx+1,sum,result)
*/

#include <iostream>
#include<vector>
using namespace std;

void f(int *arr, int n, int i, int sum, vector<int> &result){
    //base case
    if(i==n){
        result.push_back(sum);
        return;
    }
    f(arr,n,i+1,sum+arr[i],result);
    f(arr,n,i+1,sum,result);
}
int main(){
    int arr[]={2,4,5};
    int n=3;
    vector<int>result;
    f(arr,n,0,0,result);
    for(int i=0; i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}