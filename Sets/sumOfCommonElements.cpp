/*
    Add the Common Elements

    Given 2 vectors v1 and v2. Find out the common elements between the two and return 
    the sum of them.

    Input: v1 = {1,1,2,3,3,3}
           v2 = {5,6,7,5,2,3,6}

    Output: 5

    Explanation: The values common between v1 and v2 are 2,3. So sum is 2+3 = 5
*/

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int sumOfCommon(vector<int> &v1, vector<int> &v2){
    int ans = 0;
    set<int> s1;
    for(auto ele:v1){
        s1.insert(ele);
    }

    for(auto ele:v2){
        if(s1.find(ele)!=s1.end()){
            ans+=ele;
        }
    }

    return ans;
}

int main(){
    
    int n, m;
    cin>>n>>m;

    vector<int> v1(n);
    vector<int> v2(m);

    cout<<"Enter elements of v1 : ";
    for(int i=0 ; i<n ; i++){
        cin>>v1[i];
    }cout<<endl;

    cout<<"Enter elements of v2 : ";
    for(int i=0 ; i<m; i++){
        cin>>v2[i];
    }cout<<endl;

    cout<<sumOfCommon(v1,v2)<<endl;

    return 0;
}