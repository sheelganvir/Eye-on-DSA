#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Calculate the prefix bitwise AND values
        vector<int> prefixAnd(n);
        prefixAnd[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefixAnd[i] = a[i] & prefixAnd[i - 1];
        }

        int maxVal = *max_element(a.begin(), a.end());
        int result = maxVal;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int minVal;
                if (i == 0) {
                    minVal = prefixAnd[j];
                } else {
                    minVal = prefixAnd[j] & (~prefixAnd[i - 1]);
                }
                result = min(result, minVal);
            }
        }

        cout << (maxVal - result) << endl;
    }

    return 0;
}
