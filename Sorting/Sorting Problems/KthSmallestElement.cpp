/*
Write a Program to find Kth smallest element in an array using QuickSort.

Input
 Enter the elements of array
3 5 2 1 4 7 8 6
Enter the value for k
 5

Output:
 K'th smallest element is 5

*/

#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = (first - 1); // for inserting element  < pivot
    int j = first;       // for finding  elements < pivot

    for (int j = first; j < last; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // now i is pointing to the last element < pivot
    //  correct position for pivot will be i+1
    swap(arr[i + 1], arr[last]);
    return i + 1;
}

int kthSmallest(int arr[], int first, int last, int k)
{

    if (k > 0 && k <= last - first + 1)
    {
        int pos = partition(arr, first, last);
        if (pos - first == k - 1)
        {
            return arr[pos];
        }
        else if (pos - first > k - 1)
        {
            return kthSmallest(arr, first, pos - 1, k);
        }
        else
        {
            return kthSmallest(arr, pos + 1, last, k - (pos - first + 1));
        }
    }
    return INT16_MAX;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << kthSmallest(arr, 0, n - 1, k) << endl;

    return 0;
}