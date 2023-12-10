/*
    Given two strings s and t, determine if they are isomorphic

    Input1 : s = "egg", t = "add"
    Output1  : Yes

    Input2: s = "egg", t = "ada"
    Output2: No
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isIsomorphic(string s1, string s2){
    vector<int> v1(128, -1);     //128 ASCII characters
    vector<int> v2(128, -1);

    if(s1.size()!=s2.size()){
        return false;
    }

    for(int i=0 ; i<s1.size(); i++){
        if(v1[s1[i]]!=v2[s2[i]]){   //checking if value of character at idx i match in both the arrays
            return false;
        }
        v1[s1[i]]=v2[s2[i]]=i;      //storing string position in vectors for characters 
    }
    return true;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;

    if(isIsomorphic(s1,s2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}

//Time: O(length of strings)
//Space: O(256) --> O(1)