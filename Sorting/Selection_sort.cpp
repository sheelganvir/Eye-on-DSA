/*SELECTION SORT ALGORITHM : Repeatedly find minimum element in unsorted array and place it at the beginning.

In ith iteration we are selecting the element for ith element

Time Complexity : O(n^2)
Space Complexity : O(1)

Selection sort is unstable because order of elements with the same value are disturbed

Note: We prefer selection sort over bubble sort for its best case time complexity*/

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &v)
{

    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {

        int minIndex = i;
        for (int j = i + 1; j <n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }

        if (i != minIndex)
        {
            swap(v[i], v[minIndex]);
        }
    }
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

    selectionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}