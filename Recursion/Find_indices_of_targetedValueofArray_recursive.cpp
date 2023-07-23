/* Given an array arr of size N and a target value target The task is to find all the indices of the
 given target value in the array.
 Input: arr = {1, 2, 9, ,2, 2, 9}, target = 2
 Output: 1 3 4
 Element 2 is present at indices 1, 3, 4 (о based indexing)
 Input: arr[] = {8, 8, 8}, target = 8
 Output: 0 1 2
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> allIndex(vector<int> a,int target, int start)
{
        // If the start index reaches the
        // length of the array, then
        // return empty array
        if (start == a.size()) {
            vector<int> ans; // empty array
            return ans;
        }
 
        // Getting the recursive answer in
        // smallIndex array
        vector<int> smallIndex = allIndex(a, target, start + 1);
 
        // If the element at start index is equal
        // to target then
        // (which is the answer of recursion) and then
        // (which came through recursion)
        if (a[start] == target) {
           vector<int> result(smallIndex.size()+1);
 
            // Put the start index in front
            // of the array
            result[0] = start;
            for (int i = 0; i < smallIndex.size(); i++) {
 
                // Shift the elements of the array
                // one step to the right
                // and putting them in
                // result array
                result[i + 1] = smallIndex[i];
            }
            return result;
        }
        else {
 
            // If the element at start index is not
            // equal to x then just simply return the
            // answer which came from recursion.
            return smallIndex;
        }
}
int main()
{
    vector<int> a={1,2,3,2,2,5};
    int target=2;
 
        vector<int> output =  allIndex(a, target, 0);
 
        // Printing the output array
        for (int i = 0; i < output.size(); i++) {
            cout<<output[i]<<" ";
        }
}