/*MERGE SORT ALGORITHM */


#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int an = mid-l+1;
    int bn = r-mid;
    // create temp arrays
    int L[an], R[bn];
    for (int i=0;i<an;i++){
        L[i] = arr[l + i];
    }
    for (int j=0;j<bn;j++){
        R[j] = arr[mid + 1 + j];
    }

    int i=0, j=0; //intial index of array a and b
    int k = l; // initial index of merged subarray
    while (i<an && j<bn){
        if (L[i] <= R[j]){
            arr[k++]=L[i++];
        }
        else{
            arr[k++]=R[j++];
        }
    }
    while(i<an){
        arr[k++]=L[i++];
    }   
    while(j<bn){
        arr[k++]=R[j++];
    }
}

void MergeSort(int arr[], int l, int r){
    //base case
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr, mid+1, r);
    merge(arr, l , mid, r);
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

    MergeSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}