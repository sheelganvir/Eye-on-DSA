

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &a, int n)
{
    int cnt = 0;
    remove(a.begin(),a.end(),a[n]);
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            nums.erase(i);
        }
    }
    return nums.size();
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

    removeDuplicates(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}