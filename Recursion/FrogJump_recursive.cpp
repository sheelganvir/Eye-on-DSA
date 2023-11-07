/*There are N stones, numbered 1,2,,..,N. For each i (1<=i<N), the height of Stone i is hi.There
 is a frog who is initially on Stone 1. Не will repeat the following action some number of
times to reach Stone N:

 If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of |hi- hj|
 is incurred, where j is the stone to land on.

 Find the minimum possible total cost incurred before the frog reaches Stone N.
*/
#include <iostream>
using namespace std;

int f(int *h, int n , int i ){
    //base case
    if(i==n-1) return 0;
    if(i==n-2) return f(h, n, i+1) + abs(h[i] - h[i+1]);

    return min(f(h,n,i+1) + abs(h[i]-h[i+1]), f(h,n,i+2) + abs(h[i]- h[i+2]));
}
int main(){
    int arr[]={10,30,40,20};
    int n= 4;
    cout << f(arr,n,0);
    return 0;
}