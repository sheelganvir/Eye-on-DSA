/*Q3 - Given an array of size n, generate and print all possible combinations of r elements in array.
 
 Input:
 n=4
 {1,2,3,4}
 r = 2

 Expected Output:
 {1, 2}
 {1, 4}
 {2, 3}
 {1, 3}
 {2, 4}
 {3, 4}

*/

#include <bits/stdc++.h>
using namespace std;
void combination(int arr[], int n, int r, int index, vector<int> data, int i) {
                // Current combination is ready to be printed, print it
                if (index == r) {
                        for (int j=0; j<r; j++)
                        {
                        cout<<data[j]<<" ";
                        }
                        cout<<endl;
                        return;
                }
                // When no more elements are there to put in data[]
                if (i >= n)
                        return;
                // current is included, put next at next location
                data[index] = arr[i];
                combination(arr, n, r, index+1, data, i+1);
                // current is excluded, replace it with next (Note that i+1 is passed, but index is not changed)
                combination(arr, n, r, index, data, i+1);
}
void printCombination(int arr[], int n, int r) {
                // A temporary array to store all combination one by one
               vector<int> data(r);
                // Print all combination using temporary array 'data[]'
                combination(arr, n, r, 0, data, 0);
}
int main()
{
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int r;
    cin>>r;
    printCombination(arr, n, r);
}