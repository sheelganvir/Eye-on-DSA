#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    //code to print string
    string str = "College";
    string str1("Wallah");
    cout<<str<<" "<<str1<<endl;

    //code to print the output in single line
    // string str2;
    // cin>>str2;
    // getline(cin,str2);
    // cout<<str2<<endl;

    //code to print the ASCII value
    char ch = 'A';
    cout<<int(ch)<<endl;

    //code to reverse a string
    string str4 = "hello";
    reverse(str4.begin(),str4.end());
    cout << str4 << endl;

    //to find the substring of the string
    //stringname.substr(position,length)
    string str5 = "survive";
    cout<<str5.substr(1,4)<<endl;

    //+ operator --> concatenate things
    string s1 ="College";
    string s2 ="Wallah";
    cout<<s1+s2<<endl;
    //or
    s1+=s2;
    cout<<s1<<endl;

    //strcat() --> used to concatenate char array
    char s3[20] ="Sheel";
    char s4[20] ="Ganvir";
    strcat(s3,s4);
    cout<<s3<<endl;

    //push_back() --> insert char at the end of string
    string s5 = "abcd";
    char cha = 'e';
    s5.push_back(cha);
    cout<<s5<<endl;

    // size() --> length of the string 
    string s6 ="abcde";
    cout<<s6.size()<<endl;
    //or
    cout<<s6.length()<<endl;
    //for char array
    char ch1[20] = "abcde";
    cout<<strlen(ch1)<<endl;

    //to_string() --> used to convert numeric value to string
    
    return 0;
}