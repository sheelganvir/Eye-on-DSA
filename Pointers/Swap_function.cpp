// Implement the swap function using pointers.

// To swap the values of 2 variables, we can send both of them into our swap function as pointers.
//The swap function will work using a temp variable. To access the values of the variables, we’ll use the dereference operator on the pointers.

#include <bits/stdc++.h>
using namespace std;
 
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
 
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    swap(num1, num2);
    cout << num1 << ' ' << num2;
    return 0;
}