// Given two strings s and t return true if t is an anagram of s , and false if not.
// Constraints:  string s and t  will only contain lowercase alphabetical order

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isAnagram(string s1, string s2){

    //create freaq array
    vector<int> freq(26,0);

    //if lengths are different for s1, s2 then return false
    if(s1.length()!=s2.length()){
        return false;
    }

    //store frequency of characters s1 and s2
    for(int i=0 ; s1.length(); i++){
        freq[s1[i]-'a']++;  // for s1, we are incrementing freq of char
        freq[s2[i]-'a']--;  // for s2, we are decrementing freq of char
    }

    // checking freq of every char is zero
    for(int i =0 ; i<26 ; i++){
        if(freq[i]!=0){
            return false;
        }
    }


    return true;
}

int main(){
    
    string s1, s2;
    cin>>s1>>s2;
    

    if(isAnagram(s1,s2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}