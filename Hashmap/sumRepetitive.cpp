/*
    Given an integer n and n elements. Return the sum of repetitive elemets.

    Input: n=7
           Elements=[1 1 2 1 3 3 3]

    Output: 4 (as, 1+3 = 4)


    Time complexity: O(n), n-> number of elements
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int sumRepetitive(int n, vector<int> &v) {
    map<int, int> m;
    for(int i=0 ; i<n ; i++){
        m[v[i]]++;
    }

    /*
        m[1]++ =>> [1,1]
        m[1]++ =>> [1,2]
        m[7]++ =>> [7,1]
    */
    
    int sum = 0;
    //finding sum of repetitive elements
    // pair - element, frequency
    for(auto pair:m){
        if(pair.second>1){
            sum+=pair.first;
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    vector<int> input(n);
    for(int i=0 ; i<n ;i++){
        cin>>input[i];
    }

    cout<<"Ans: "<<sumRepetitive(n, input)<<endl;

    return 0;
}