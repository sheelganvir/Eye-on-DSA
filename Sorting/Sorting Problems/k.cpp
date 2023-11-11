#include <iostream>
#include <vector>
#include <algorithm>
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

        int result = 0;
        for (int i = 0; i < n; i++) {
            result &= a[i];
        }

        cout << result << endl;
    }

    return 0;
}
