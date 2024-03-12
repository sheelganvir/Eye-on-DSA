/*
    Given an array of length of n and a target, return a pair whose sum is equal to the given target. 
    If there is no pair present, return -1.

    Input1: n = 7
            Elements = [1,4,5,11,13,10,2]
            Target = 13

    Output1: [3,6]

    Input2: n = 5
            Elements = [9,10,2,3,5]
            Target = 15

    Output2: [1,4] 

    ***********************************************************************************************
            Time complexity: O(n), n is the length of array
            Space complexity: O(n), n is the number of unique characters in string s1 and s2

    **********************************************************************************************


*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool checkNoOneToManyMapping(string s1, string s2){

    unordered_map<char,char> m;
    for(int i=0 ; i<s1.size() ; i++){
        if(m.find(s1[i])!=m.end()){
            if(m[s1[i]]!=s2[i]){ 
                return false;
            }
        }else{
            m[s1[i]] = s2[i];
        }
    }
    return true;
}

bool checkIsomorphic(string s1, string s2){
    //if size are not equal
    if (s1.size() != s2.size()) return false;

    //checking one to many mapping from s1->s2
    bool s1s2 = checkNoOneToManyMapping(s1,s2);

    //checking one to many mapping from s2->s1
    bool s2s1 = checkNoOneToManyMapping(s2,s1);

    return s1s2 and s2s1;
}

int main(){
    
    string s1, s2;
    cin>>s1>>s2;

    cout<<(checkIsomorphic(s1,s2)? "True":"False")<<endl;
    return 0;
}