//Given an integer, find the sum of its digits using recursion.

//----------------------------------------------

//Base case: if (n>=0 and n<=9) return n. If you have a single digit no., then ans is no. itself.

//Assumption: Assume that function f works correctly for n/10.

//Self work: To the sum of digits of n/10 add the last digit of n i.e., n%10

// f(n) = f(n/10) + (n%10)

//f(n) -> This fumction returns the sum of digits of n.
//f(n/10) -> This function calculate the sum of no. remaining after elemation of the last digit.
//n%10 -> last digit

#include <iostream>
using namespace std;

int f(int n){
    //base case
    if(n>=0 and n<=9) return n;
    return f(n/10)+(n%10);
}

int main(){
    int result = f(1234);
    cout<<result<<endl;
    return 0;
}

//Time complexity = 0(n) , n is no. of digits
//space complexity = 0(n)