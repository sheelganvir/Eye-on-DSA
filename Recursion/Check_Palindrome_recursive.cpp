//Write a program to check whether a given number is palindrome or not.

// f(num, *temp) =

#include <iostream>
using namespace std;

bool f(int num, int *temp){
    //base case
    if(num>=0 and num<=9){
        int lastDigitofTemp = (*temp)%10;
        (*temp) /= 10;
        return (num==lastDigitofTemp);
    }
    bool result = (f(num/10,temp) and (num%10)==((*temp)%10));
    (*temp)/=10;
    return result;
}
int main(){
    int num = 12621;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<f(num,temp);
    return 0;
}