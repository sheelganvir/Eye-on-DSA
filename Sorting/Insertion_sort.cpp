/*INSERTION SORT ALGORITHM : Repeatedly take element from unsorted subarray and insert in the correct position of sorted subarray.

Time Complexity : O(n^2)
Space Complexity : O(1)

insertion sort is stable because order of elements with the same value are not disturbed

Note: We prefer insertion sort when array is almost sorted or only few unsorted elements are present*/

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int current_ele = arr[i];

        //find correct position for current element
        int j = i - 1;
        while (j >= 0 && arr[j] > current_ele)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        //insert correct element
        arr[j + 1] = current_ele;
    }
    return;
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

    insertionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}