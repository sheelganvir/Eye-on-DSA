//Given an array, print all the elements of the array recursively

#include <iostream>
using namespace std;

void f(int *arr, int idx, int n){
    //base case
    if(idx==n) return;

    //self work
    cout<<arr[idx]<<endl;

    //assume that
    f(arr, idx+1, n); //assume it works correctly -> it will print the remaining array
}
int main(){
    int n=5;
    int arr[]={6,1,9,3,4};
    f(arr,0,n);
    return 0;
}

////Time complexity = 0(n) 
//space complexity = 0(n)