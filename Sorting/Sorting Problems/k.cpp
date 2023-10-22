#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isEtherealWrap(vector<int> code) {
    int n = code.size();
    
    // Sort the code array
    sort(code.begin(), code.end());
    
    for (int i = 1; i < n; i++) {
        if (code[i] - code[i - 1] > 1) {
            return false;
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
        vector<int> code(n);
        
        for (int i = 0; i < n; i++) {
            cin >> code[i];
        }
        
        if (isEtherealWrap(code)) {
            cout << "Yes, it is Ethereal Wrap" << endl;
        } else {
            cout << "No, it is a normal invisibility cloak" << endl;
        }
    }
    
    return 0;
}
