/*COUNT SORT ALGORITHM 

Time Complexity : O(n+max)
Space Complexity : O(n+k)

Note : 
 1) Count sort is not preferable if max >> n. Or max should be order of n.
 2) Count sort is prefferrable if more elements is repeated
 3) Count sort is not used for floating number.
 4) Count sort is not preferrable if elements are not comparable to each other.
 5) Count sort is stable algo
*/

#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &v)
{
    int n = v.size();

    //find max element
    int max_ele = INT16_MIN;
    for(int i = 0 ; i< n; i++){
        max_ele= max(v[i],max_ele);
    }

    //create the freq array
    vector<int> freq(max_ele+1,0);
    for(int i =0 ; i<=n;i++){
        freq[v[i]]++;
    }

    //calculate cumulative array
    for(int i = 1 ; i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }

    //calculated the sorted array
    vector<int>ans(n);
    for(int i =n-1 ; i>=0 ; i--){
        ans[--freq[v[i]]]= v[i];
    }

    // copy back the answer array to original array
    for(int i =0; i<n ; i++){
        v[i] = ans[i];
    }
}

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    countSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}