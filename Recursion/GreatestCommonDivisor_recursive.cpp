/*Given twi numbers x and y. Find the greatest common divisor or HCF of x and y using recursive

Constraints : x>=0 , y<=10^6
Input: x=4 y=9
Output: 1

gcd(a,b) = gcd(b, a%b) ; a>b
*/




#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;  //base case
    return gcd(b,a%b);
}

int main(){
    cout<<gcd(48,8);
    return 0;
}