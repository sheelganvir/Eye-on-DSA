#include <bits/stdc++.h>
using namespace std;

void solve()
{
     int n ;
     cin>>n;
     string bilal[n];
     int max=1;
     for(int i=0 ; i<n ; i++){
      cin>>bilal[i];
     }
      int count =0;
     for(int i=1; i<n ; i++){
      if(bilal[i]==bilal[i-1]){
            
            count++;
      }
      if(max<count){
            max=count;
      }
     }
     if(max>=n/2){
      cout<<"NO"<<endl;
     }
     else{
      cout<<"YES"<<endl;
     }

}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);

      int Test_Cases;
      cin>>Test_Cases;

      while (Test_Cases--)
      {
            solve();
      }
      
      return 0;
}
