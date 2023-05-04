#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-2, -1, 0, 3, 6, 8, 11, 12};
    int x = 14; // target sum
    int n = 8;  // size of given array
    // code to find if there is a pair with sum x
    int i = 0;
    int j = n - 1;
    bool found = false;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            found = true;
            break;
        }
        else if (arr[i] + arr[j] < x)
        {
            // sum is less than x , increase the sum
            i++;
        }
        else
        {
            // sum is more than x , decrease the sum
            j--;
        }
    }
    if (found == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}