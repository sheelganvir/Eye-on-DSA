/*The problem is to count all the possible paths on an m x n grid from 
top left (grid[o][o]) to bottom right (grid[m-1][n-1]).

 Having constraints that from each cell you can either move only to right or down.

 Input: m = 2,n= 3
 Output: 3

*/

#include <iostream>
using namespace std;

int f(int i, int j, int m, int n) {
    if(i== m-1 and j== n-1) return 1;
    if(i>=m or j>=n) return 0;
    return f(i, j + 1, m, n) + f(i+1, j, m, n);
}


int main(){
    cout<<f(0,0,3,3);
    return 0;
}