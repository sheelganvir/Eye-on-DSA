#include <iostream>
using namespace std;

int main(){
    int x, y;   //declaring x and y so x,y has garbage value
    cin>>x>>y;

    int *ptrx = &x; //&x fatches address of x and then store it in ptrx
    int *ptry = &y; //&y fatches address of y and then store it in ptry

    int result; //Dclare result so it has garbage value

    int *ptr_result = &result;
    
    *ptr_result = *ptrx + *ptry ;

    cout<<result<< " "<< *ptr_result <<endl;
    return 0;
}