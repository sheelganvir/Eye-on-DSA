/*
    An encoded string(s) is given, and the task is to decode it. The encoding pattern is that 
    the occurence of the string is given at the starting of the string and each string is 
    enclosed by square brackets
    Note: The occurence of a sngle string is less than 1000

    Input1: s = 1[b]
    Output1: b

    Input2: s = 3[b2[ca]]
    Output: bcacabcacabcaca
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string decodedString(string s){
    string result = "";

    //traversing the encoded string
    for(int i=0 ; i<s.length(); i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            string str = "";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            //resversing the str
            reverse(str.begin(), str.end());

            //remove last char from result which is [
            result.pop_back();

            //extract num from result
            string num = "";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            //reversing the num string
            reverse(num.begin(),num.end());

            //convert string to integer (STOI method)
            int int_num = stoi(num); 

            //inserting str in result int_num times
            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }
    return result;
}

int main(){
    
    string str;
    cin>>str;

    cout<<decodedString(str)<<endl;
    return 0;
}