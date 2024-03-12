/*
    Check whether two strings are isomorphic of each other. Return true if they are else return false.

    Isomorphic: Two strings are isomorphic of each other if there is a one to one mapping is possible for 
                every charcters of the first string to every character of second string and all occurreneces
                of every character in first character in first string maps to the same character in the second string.

    Input1: aab
            xxy

    Output1: True

    Input2: abcdec
            viouog

    Output2: False 

    ********************************************************************************
            Time complexity: O(N), N is sum of lengths of s1 and s2
            Space complexity: O(n), n is the number of unique characters in string s1 and s2

    ********************************************************************************


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