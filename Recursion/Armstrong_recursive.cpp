/* Given a number n. Print if it is a armstrong or not.

An armstrong number is a number if the sum of every digits int that number raised to the power of total digits in that number is equal to that number.

Input: 153
Output: Yes

153 = 1^3 + 5^3 + 3^3 = 1+125+27 = 153 hence 153 is a armstrong number.

f(n,d) = pow(n%10,d) + f(n/10,d)

*/
#include <iostream>
using namespace std;

int pow_recursive(int p, int q)
{
    // base case
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        // If q is even
        int result = pow_recursive(p, q / 2);
        return result * result;
    }
    else
    {
        // If q is odd
        int result = pow_recursive(p, (q - 1) / 2);
        return p * result * result;
    }
} 

int f(int n, int d){
    //base case
    if(n==0) return 0;
    return pow_recursive(n%10,d) + f(n/10, d);
}

int main(){
    int n;
    cin>>n;

    int no_of_digits=0;
    int temp = n;

    while(temp>0){
        temp=temp/10;
        no_of_digits++;
    } 

    int result = f(n,no_of_digits);
    if(result==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}