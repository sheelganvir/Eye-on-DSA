/*Given an array of integers, print a sum triangle using recursion from it such that the first
 level has all array elements. After that, at each level the number of elements is one less than the
 previous level and elements at the level will be the Sum of consecutive two elements in the
 previous level.

 Sample Input: [5,4,3,2,1]
 Sample Output:
 5,4,3,2,1
 9,7,5,3
 16, 12, 8
 28, 20
 48
*/

#include <iostream>
using namespace std;
void helper(int arr[] , int size)
{    
        if (size < 1)
        {
            return;
        }
         for (int i = 0; i < size ; i++)
        {
            if(i == size - 1)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << arr[i] << ", ";
            }
        }
        cout << endl;
        int level[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            int sum = arr[i] + arr[i + 1];
            level[i] = sum;
        }
        helper(level, size - 1);
}
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    helper(arr,n);
}