// Write a function that returns the first character, last character and the number of occurrences of ‘t’ in a string input by user.
// In this question, we need to return 3 values. We are going to use pointers to return 2 of them and make the function return the third one.

#include <bits/stdc++.h>
using namespace std;
 
int fun(string s, char *first, char *last)
{
    *first = s[0];
    *last = s[s.size() - 1];
    int cnt = 0;
    for (auto &ch : s)
        if (ch == 't')
            cnt++;
    return cnt;
}
 
int main()
{
    string s;
    cin >> s;
    char first, last;
    int count = fun(s, &first, &last);
    cout << first << ' ' << last << ' ' << count;
    return 0;
}