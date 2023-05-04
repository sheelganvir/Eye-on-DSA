#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,10,15,20,26};
    int n = 5;  //size of given array
    int x = 10; //target difference

    //code to check whether there is any pair with the abs difference = x

    int i = 0;
    int j = 1;
    bool found = false;
    while( i<n and j<n){
        if(abs(arr[i]-arr[j])==x){
            found = true;
            break;
        }
        else if(abs(arr[i]-arr[j])<x){
            j++;
        }
        else{
            i++;
        }
    }
    if(found==true) cout<<"YES";
    else cout << "NO";
    return 0;
}