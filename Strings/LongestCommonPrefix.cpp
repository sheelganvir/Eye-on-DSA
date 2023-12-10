/*
    Given an array of strings. Write a progam to find the longest common prefix
    string amongst an array of strings.

    Input: ["flower","fly","flight"]
    Output: "fl"
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string LongestCommonPrefix(vector<string> &str){
    // Sorting the array of strings
    sort(str.begin(), str.end());

    string s1 = str[0];
    int i = 0;
    string s2 = str[str.size()-1];
    int j = 0;

    string ans="";
    while(i<s1.size() && j<s2.size()) {
        if(s1[i] == s2[j]) {
            ans+=s1[i];
            i++; j++;
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter no. of strings : ";
    cin>>n;

    cout<<"Enter strings: ";
    vector<string>str(n);
    for(int i=0; i <n ; i++){
        cin>>str[i];
    }
    cout << "Longest common Prefix: " << LongestCommonPrefix(str)<<endl;
    return 0;
}

//Time : sorting + comparing
//Time : O(nlogn * m) + O(min(s[0].size(),s[n-1].size())) = O(nlogn * m)
//Space: O(1)