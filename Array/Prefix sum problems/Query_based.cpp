//Given an array of integes of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r (both included)
//Note: The value of l and r in queries follow 1-based indexing

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    // if we include an array as {5,8,6,9} then it will save as {0,5,8,6,9}

    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    
    //calculate prefix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=0;
        //ans = prefixSumArray[r]-prefixSumArray[l-1]
        ans=v[r]-v[l-1];
        cout<<ans<<endl;

    }
    return 0;
}