#include <iostream>
using namespace std;

void process(int *arr, int n){
    //Inside this function we have the access of the same array in the main
    for(int i = 0; i < n ; i++){
        cout<<*(arr + i)<<endl;
    }
    //The above code can be written as 
    //for(int i =0 ; i<n ;i++){
        //cout<<arr[i]<<endl;
    //}
}
int main(){
    int arr[3] = {5,1,2};
    process(arr,3);
    return 0;
}