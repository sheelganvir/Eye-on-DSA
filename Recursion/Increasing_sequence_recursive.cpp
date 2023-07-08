/*Given a number n. Find the increasing sequence from 1 to n without using any loop*/

#include <iostream>
using namespace std;

void f(int n)
{
    // base case
    if (n<1)
        return;

    // Go and print first n-1 natural numbers -> assumption
    f(n-1);
    cout<<n<<" ";
}

int main()
{   
    f(5);
    return 0;
}