#include <iostream>
using namespace std;

int f(int n){
    //base case
    if(n==1){
        return 1;
    }
    int ans = n * f(n-1);
    return ans;

    //or
    //if(n==1) return 1;
    //return n*f(n-1);

}

int main(){

    int result = f(5);
    cout<<result<<endl;
    return 0;
     
}

//Time complexity = 0(n)
//space complexity = 0(n)