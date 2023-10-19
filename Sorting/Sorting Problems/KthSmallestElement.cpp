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

int partition(int arr[], int first, int last){
    int pivot = arr[last];
    int i = (first -1); // for inserting element  < pivot
    int j = first; //for finding  elements < pivot

    for (int j=first; j<last;j++){
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    //now i is pointing to the last element < pivot
    // correct position for pivot will be i+1
    swap(arr[i+1], arr[last]);
    return i+1;
}

void quickSort(int arr[], int first , int last ){

    // base case 
    if(first>=last){
       return;
    } 

    //Recursive Case
    int pi = partition(arr, first, last);
    quickSort(arr, first, pi-1);
    quickSort(arr, pi+1, last);
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

    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}