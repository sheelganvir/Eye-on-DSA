// Pointers --> Data-type *pointers_name;

#include <iostream>
using namespace std;

int main(){
    int x = 18;
    float y = 7.9;

    //Create a pointer that can store address of x
    //As x is an integer variable,so we need a pointer that can store address of integer type

    int *ptr = &x;
    cout<<ptr<<endl;

    //Create a pointer that can store address of y
    //As y is an float variable,so we need a pointer that can store address of float type

    float *ptrf = &y;
    cout<<ptrf<<endl;

    //First we will declare the pointer

    int *ptr1;  //Only declaring the pointer
    cout<<ptr1<<endl;

    int marks = 91;

    ptr1= &marks;   //re-assignment/update

    cout<<ptr1<<endl;
    return 0;
}