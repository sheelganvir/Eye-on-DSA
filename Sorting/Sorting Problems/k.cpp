#include <bits/stdc++.h>
using namespace std;

// -1 2 -3 5 6 8 -10 15 -16 -9
// 

vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int ai=0;
        int bi=1;
        vector<int> newman(nums.size());
        for(int i=0 ; i< n ; i++){
            if(nums[i]>=0){
                newman[ai]=nums[i];
                ai+=2;
            }
            else{
                newman[bi]=nums[i];
                bi+=2;
            }
        }
        
        return newman;
    }

int main()
{
      vector<int> v(10);
      for (int i = 0; i < 10; i++)
      {
            cin >> v[i];
      }

      rearrangeArray(v);
      
      for (int i = 0; i < 10; i++)
      {
            cout<< v[i]<<" ";
      }
      return 0;
}
