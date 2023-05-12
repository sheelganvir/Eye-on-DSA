// * --> Dereference operator  

#include <iostream>
using namespace std;

int main(){
    int x = 18;
    
    int *ptr = &x;

    cout<<"Address store inside ptr : "<<ptr<<endl;    //Print address of x

    //We can use *ptr to actually access the value stored on the address pointed by ptr.
    //Print the value store in x

    cout<<"Value present at the address stored in ptr : "<<*ptr<<endl;   

    //Updating the value

    x=23;
    // The bucket x updated the value from 18 to 23 but ptr is still pointing to same bucket
    //Now if we dereference ptr, we will get 23

    cout<<"New updated value of x : " << x <<endl;
    cout<<"ptr still pointing to same memomry which has 23 intead of 18 : "<<*ptr<<endl;

    // updating x with pointer 
    *ptr = 50;

    cout<<"New value of x : "<<x<<endl;
    cout<<"New value pointed by ptr : "<<*ptr<<endl;

    int valueAtX = *ptr;
    cout<<valueAtX<<endl;
    return 0;
}