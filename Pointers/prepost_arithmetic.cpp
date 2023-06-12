#include <iostream>
using namespace std;

int main(){
    int arr[2] = {5,4};
    int *ptr = &arr[0];
    cout<<(*ptr)++<<endl;
    cout<<*ptr<<" "<<*(ptr+1)<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<endl;

    int array[2] = {5,4};
    int *pointer = &array[0];
    cout<<*++pointer<<endl;
    cout<<array[0]<<" "<<array[1]<<endl;
    cout<<endl;

    int arry[2] = {5,4};
    int *pntr = &arry[0];
    cout<<++*pntr<<endl;
    cout<<arry[0]<<" "<<arry[1]<<endl;
    cout<<endl;
    
    //Below all oders print the address of first index element of the following arrays
    cout<<ptr<<" " <<arr<<endl;    
    cout<<pointer<<" " << array<<endl;
    cout<<pntr<<" "<<arry<<endl;

    cout<<endl;
    cout<<*arr<<endl;
    cout<<*array<<endl;
    cout<<*arry<<endl;
    cout<<endl;

    cout<<*arr<<" "<<*(arr+1)<<" "<<endl;
    return 0;
}