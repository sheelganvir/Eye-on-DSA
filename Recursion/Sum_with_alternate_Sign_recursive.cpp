/*Given a number n. Find the sum if natural number till n but with alternate signs
That means if n=5 then you have to return 1-2+3-4+5 = 3 as your answer.

Input: n=10;
Output: -5

Constraints: 0<=n<=1e6
*/
#include <iostream>
using namespace std;

int f(int n){
    //base case
    if(n==0) return 0;

    // assumption
    return f(n-1) + ((n%2==0)?(-n):(n));
    // Calculate sum of first n-1 natural num with alternate signs and we will add contribution of n
}
int main(){
    cout<<f(5)<<endl;
    return 0;
}