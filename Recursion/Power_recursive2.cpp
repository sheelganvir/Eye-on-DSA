// Given two numbers p and q, find the value of p^q using a recursive function.

#include <iostream>
using namespace std;

// f(p,q) =  f(p,q/2)^2             ; q is even
//        =  p * (f(p, (q-1)/2))^2  ; q is odd

int f(int p, int q)
{
    // base case
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        // If q is even
        int result = f(p, q / 2);
        return result * result;
    }
    else
    {
        // If q is odd
        int result = f(p, (q - 1) / 2);
        return p * result * result;
    }
}

int main()
{
    int result = f(5, 2);
    cout << result << endl;
    return 0;
}

// Time complexity = 0(logq)
// space complexity = 0(logq)