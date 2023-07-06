/* Given a number n which denotes the number of variables in the equation and a val which
 denotes the sum of these variables, count the number of such non-negative integral solutions
 that are possible.

 Sample Input: n=5 val=1
 Sample Output: 5

Explanation:
x1 + x2 + x3 + x4 + x5 = 1
Number of possible solution are:
 (00001), (00010), (00100),
 (01000), (10000)
Total number of possible solutions are 5

Explanation:
  1. We have created a function count of int type which will return the total number of non-negative
   required integral solutions. It has two arguments: the first is n which denotes the number of
   variables in the equation and a val which denotes the sum of these variables.
 2. Make a recursive function call to count(int n, int val).
 3. Call this count function count(n-1, val-i) until n = 1 and val >=0, as this is the base case condition if
   number of variables are 1 and val >=0 i.e if number of variables in the equation is 1

*/

#include<iostream>
using namespace std;
int count(int n,int val)
{
    int ans = 0;
    if (n == 1 && val >=0) //base case
        return 1;
 
    // iterate the loop till equal the val
    for (int i = 0;i <= val; i++){
        ans += count(n-1, val-i);
    }
     
    // return the total no possible solution
    return ans;
}
int main()
{
    int n,val;
    cout<<"Enter n and val : ";
    cin>>n;
    cin>>val;
    cout<<count(n,val);
}