/*Given a number n, print the following pattern without using any loop.
n, n-5, n-10, ..., 0, 5, 10, ..., n-5, n 

Explanation:
   Create a recursive function with parameters as n, m set as n and flag variable set as true. The flag will be
   true if m is decrementing and false if m is incrementing.
   Print m and when the flag is false and the value of m is equal to n then return from the function
   If the flag is true then check
         If m-5 is greater than zero then recur for m-5
         Else recur for m-5 and set the flag to false, as now we will be moving backward
   Else recur for m+5

*/

#include <iostream>
using namespace std;
void rec(int n,int m,bool flag)
{
               cout<<m<<" ";
                // If we are moving back towards n and we have reached there, then we are done
                if (flag == false && n == m)
                        return;
 
                // If we are moving towards 0 or negative.
                if (flag) {
                        // If m is greater, then 5, recur with true flag
                        if (m - 5 > 0)
                                rec(n, m - 5, true);
 
                        else // recur with false flag
                                rec(n, m - 5, false);
                }
 
                else // If flag is false.
                        rec(n, m + 5, false);
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    rec(n,n,true);
}