// To find the first and last index of occurence of a character of given given string

#include <iostream>
using namespace std;

void findFirstAndLastIndex(string s, char ch, int *first, int *last){
    for(int i = 0; i< s.size() ; i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }

    for(int i = s.size() -1 ; i>=0 ; i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }
}
int main(){
    
    string s ="aaabcac";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    findFirstAndLastIndex(s, ch, pf, pl);

    cout<< *pf<< " " <<*pl<<endl;
    cout<< first<<" "<<last<<endl;

    return 0;
}