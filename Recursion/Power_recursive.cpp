// Given two numbers p and q, find the value of p^q using a recursive function.

#include <iostream>
using namespace std;

//f(p,q) =  p*f(p,q-1)

int f(int p, int q){
    //base case
    if(q==0) return 1;
    return p*f(p,q-1);
}

int main(){
    int result = f(5,2);
    cout<<result<<endl;
    return 0;
}