/*
    Given n integers (can be duplicates), print the second smallest integer.
    If it does not exit print -1.

    Input: n=4
            1 2 2 -4
    Output: 1
*/

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int secondSmallest(vector<int> &v){
    set<int> s; // to store
    for(auto val : v) {
        s.insert(val);
    }
    auto itr = s.begin();
    itr++;
    return *itr;
}

int main(){
    
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }

    cout<<secondSmallest(v);
    return 0;
}