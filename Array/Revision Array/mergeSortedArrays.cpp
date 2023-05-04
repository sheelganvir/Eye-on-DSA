#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1,6,7,10};
    int arr2[] = {0,1,3,8,11,12,15,18};
    int m = 4;
    int n = 8;
    // code to merge sorted array
    int result[m+n];
    int i = 0;  //will help us to iterate on arr1
    int j = 0;  //will help us to iterate on arr2
    int k = 0;  //will help us to iterate on result

    while( i < m and j < n){
        // both i and j should be within the limits or arr1 and arr2
        if(arr1[i] < arr2[j]){
            result[k]=arr1[i];
            k++;
            i++;
        }
        else{
            result[k] = arr2[j];
            k++;
            j++;
        }
    }

    while( i < m){
        // arr2 wah exhausted and we still got elements left in arr1
        result[k]=arr1[i];
            k++;
            i++;
    }

    while( j < n ){
        // arr1 wah exhausted and we still got elements left in arr2
        result[k] = arr2[j];
            k++;
            j++;
    }

    // display result 
    for( int i = 0 ; i < (m+n) ; i++ ){
        cout << result[i] <<" ";
    }
    return 0;
}