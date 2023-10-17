/*INSERTION SORT ALGORITHM : 

Time Complexity : 
Space Complexity : 
*/

#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &arr)
{
    
    return;
}

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    quickSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}