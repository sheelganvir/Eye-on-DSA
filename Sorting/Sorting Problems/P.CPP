#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool canCastSpells(const vector<string>& spells) {
    int consecutiveCount = 1;

    for (int i = 1; i < spells.size(); i++) {
        if (spells[i] == spells[i - 1]) {
            consecutiveCount++;
            if (consecutiveCount > 2) {
                return false; // Cannot use the same spell consecutively more than twice
            }
        } else {
            consecutiveCount = 1;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> spells(n);

        for (int i = 0; i < n; i++) {
            cin >> spells[i];
        }

        if (canCastSpells(spells)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
