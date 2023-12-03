/*
    Given a strings str, sort the given string.
    Constraints: The string will contain only alphabetical characters from a-z.

    Input 1: "codingwallah"
    Output 1: "aacdghillnow"

    Input 2: "star"
    Output 2: "arst"

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string countSort(string str){
    vector<int>freq(26,0);

    //storing frequency of every character in string
    for(int i=0 ; i<str.length(); i++){
        int index = str[i]-'a';
        freq[index]++;
    }

    //create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';
        }
    }
    return str;
}


int main(){
    string str;
    cin>>str;
    cout<<countSort(str)<<endl;
    return 0;
}