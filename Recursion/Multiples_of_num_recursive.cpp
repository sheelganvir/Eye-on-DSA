/*Given a number n and a value k. Print k multiples of num

Constraints: k>0
Input: num=12, k=5
Output: 12,24,36,48,60
*/


#include <iostream>
using namespace std;

void f(int n, int k){
    //base case
    if(k==0) return;

    f(n,k-1);
    cout<<n*k<<" ";
}
int main(){
    f(12,5);
    return 0;
}