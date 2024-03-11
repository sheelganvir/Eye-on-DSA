/*
    Check whether tw strings are anagram of each other. Return true if they are else reu=turn false.
    An anagram of a string is another string that contains the same characters, only the order of
    characters can be different. For example, "abcd" and "dabc" are an anagram of each other.

    Input1 : triangle
             integral
    Output1: True

    Input2 : anagram
             grams
    Output2: False

*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool checkAnagram(string s1, string s2){
    //if size are not equal
    if (s1.size() != s2.size()) return false;

    unordered_map<char,int> m;

    for(auto c1:s1){
        m[c1]++;    //storing characters and their frequency in s1
    }

    for(auto c2:s2) {
        if(m.find(c2)==m.end()){
            return false;
        }else{
            m[c2]--;
        }
    }

    for(auto ele:m){
        if(ele.second!=0){
            return false;
        } 
    }
    return true;
}

int main(){
    
    string s1, s2;
    cin>>s1>>s2;

    cout<<(checkAnagram(s1,s2)? "True":"False")<<endl;
    return 0;
}