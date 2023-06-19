// Given two numbers p and q, find the value of p^q using a recursive function.

#include <iostream>
using namespace std;

int f(int p, int q){
    //base case
    if(q==0) return 1;
    int z = q*f(p,p);
    return z;
}

int main(){
    int result = f(5,2);
    cout<<result<<endl;
    return 0;
}