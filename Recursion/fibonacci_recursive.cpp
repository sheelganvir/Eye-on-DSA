//Program to find the nth fibonacci number
// fibonnacci series : 0,1,1,2,3,5,8,13,21,...

//Value of nth term is equal to the sum of previous 2 terms i.e., 
// (n-1)th term + (n-2)th term

// Term : 0th 1th 2th 3th 4th 5th 6th 7th 8th.......
//         |   |   |   |   |   |   |   |   |   
// Value : 0   1   1   2   3   5   8   13  21.......

#include <iostream>
using namespace std;

int fib(int n){
    if(n==0 or n==1) return n;
    
    return fib(n-1)+fib(n-2);
}
int main(){
    int result = fib(6);
    cout<<result<<endl;
    return 0;
}

//Time complexity = 0(2^n)
//space complexity = 0(n)