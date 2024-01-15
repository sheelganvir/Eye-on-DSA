#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());

        long long result = 0;
        int j = 0;

        for (int i = 0; i < n; ++i) {
            if (j < m && b[j] > b[i]) {
                result += b[j];
                ++j;
            } else {
                result += a[i];
            }
        }

        cout << result << endl;
        
    }

    return 0;
}
