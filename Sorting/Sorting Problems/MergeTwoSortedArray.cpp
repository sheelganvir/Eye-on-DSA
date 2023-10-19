/*
Given two sorted arrays, Write a program to merge them in a
sorted Manner.

Input: num1[] = { 5,8,10}, num2[] = {2,7,8}
Output: num3[] = {2,5,7,8,8,10}

*/


#include <iostream>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[]){
    
    int a=0;
    int b=0;
    int c=0;

    while (a<n1 && b<n2){
        if (arr1[a] <= arr2[b]) {
            arr3[c++]=arr1[a++];
        }
        else {
            arr3[c++]=arr2[b++];
        }
    }

    while(a<n1){
        arr3[c++]=arr1[a++];
    }

    while(b<n2){
        arr3[c++]=arr2[b++];
    }
}


int main()
{

    int n1;
    cout<<"For array 1"<<endl;
    cout<<"Enter size of array1 : ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of array1: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout<<endl;

    int n2;
    cout<<"For array 2"<<endl;
    cout<<"Enter size of array2 : ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of array2: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    cout<<endl;

    int n3 = n1 + n2;
    int arr3[n3];
    merge(arr1, n1, arr2, n2, arr3);

    cout<<"Merged Sorted Array : ";
    for (int i = 0; i < n3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}