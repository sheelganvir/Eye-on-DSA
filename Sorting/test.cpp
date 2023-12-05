#include <iostream>
#include <string>
using namespace std;


string reverseWords(string s) {
    int i = s.length() - 1;
    string ans;
    while (i >= 0) {
        int j=0;
        int pos=0;
        while(i>=0 && s[i]!=' '){
            j++;
            pos=i;
            i--;
        }
        if(j!=0){
            string sub = s.substr(pos,j);
            ans+=sub+" ";
            i--;
        }
    }
    return ans;
}

int main() {
    
    string input = "  hello world  ";
    
    cout << "[" << reverseWords(input) << "]" << endl;  // Output: [world hello]
    return 0;
}
