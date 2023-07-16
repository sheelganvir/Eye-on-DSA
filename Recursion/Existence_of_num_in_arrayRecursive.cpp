/*Given an array of n integers and a target value x.Print whether x exists in the
array or not.
Constraints:0<=n <=le6, -le8 <= x < = le8, -le8 <= a[i] <= le8
Inputl : n = 8,x = 14, array = [4,12, ,54,14,3,8,6,1]
Output1 : Yes
Input2:n =1 , x= 9, array = [2]
Output2 : No

f(arr,n,i,x) = (arr[i]==x) || f(arr,n,i+1,x);
*/

#include <iostream>
using namespace std;

bool f(int *arr, int n, int i, int x){
    //base case
    if(i==n){
        //array is exhausted
        return false;
    }
    return (arr[i]==x) || f(arr,n, i+1, x);
}
int main(){
    int n = 9;      //size
    int arr[] = {4,12,9,54,14,3,8,6,1};
    int x = 14; 
    bool result = f(arr,n,0,x);
    if(result) cout<<"Yes";
    else cout<<"No";
    return 0;
}