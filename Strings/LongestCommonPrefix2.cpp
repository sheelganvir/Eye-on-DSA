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
    
    string s1 = str[0];
    int ans_length = s1.size();

    for(int i =1 ; i<str.size() ; i++){
        int j= 0 ;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){
            j++;
        }
        ans_length=min(ans_length,j);
    }
    string ans = s1.substr(0,ans_length);
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