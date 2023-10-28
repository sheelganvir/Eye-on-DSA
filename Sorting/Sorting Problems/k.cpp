/**
 * The code takes an input array of integers, rearranges the positive numbers to even indices and
 * negative numbers to odd indices, and returns the rearranged array.
 * 
 * param nums The parameter `nums` is a vector of integers.
 * 
 * return The `rearrangeArray` function returns a vector of integers.
 */
#include <bits/stdc++.h>
using namespace std;

// -1 2 -3 5 6 8 -10 15 -16 -9
// 

vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int ai=0;
        int bi=1;
        vector<int> newman(nums.size());
        /* The line `for(int i=0 ; i< n ; i++)` is a for loop that iterates over the elements of the
        `nums` vector. It starts with `i` equal to 0 and continues as long as `i` is less than the
        size of the `nums` vector (`n`). After each iteration, `i` is incremented by 1. */
        for(int i=0 ; i< n ; i++){
            if(nums[i]>=0){
                /* The line `newman[ai]=nums[i];` is assigning the value of `nums[i]` to the element at
                index `ai` in the `newman` vector. This is part of the process of rearranging the
                positive numbers to even indices in the `newman` vector. */
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
