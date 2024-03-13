/*
    Write a program to print all permutations of the given string s
    in lexicographically sorted order.

    Input: PQR
    Output: PQR PRQ QPR QRP RPQ RQP
*/

#include <iostream>
using namespace std;

void permutation(string &str, int i){
    //base case
    if(i == str.size()){
        cout<<str<<"\n";
        return;
    }
    for(int j = i ; j<str.size() ; j++){
        swap(str[i],str[j]);
        permutation(str, i+1);
    }
}

int main(){ 
    string str = "abc";
    permutation(str,0);
    return 0;
}