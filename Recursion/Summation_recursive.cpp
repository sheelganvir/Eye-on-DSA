/*Find m-th summation of first n natural numbers where m-th summation of first n natural
 numbers is defined as following:
 If m > 1: SUM(n, m) = SUM(SUM(n, m-1),1)
 Else :SUM(n, 1) = Sum of first n natural numbers.

Explanation:
   We first write the recursive function for the sum of first n natural numbers.
   Next we create our main recursive function where we pass n and m as arguments.
   We use the question defined equations, if m=1, we directly call the sum of n function.
   Else we recursively call our function for n and m-1 and then calculate sum of first n natural numbers for this
   sum.
*/

#include <iostream>
using namespace std;
int sumofn(int n){
    int ans = 0;
    if(n == 1){
        ans++;
        return ans;
    }
    ans += n + sumofn(n-1);
    return ans;
}
int rec(int n, int m) {
        if (m == 1)
        {
            return sumofn(n);
        }
        int sum = rec(n, m - 1);
        return sumofn(sum);
}
 
int main()
{
    int n,m;
    cout<<"Enter the number n and m : ";
    cin>>n;
    cin>>m;
    cout<<rec(n,m);
}