#include <iostream>
#include <stack>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        stack<char> result;

        for (char c : s) {
            if (c == 'b' || c == 'B') {
                if (!result.empty() && islower(result.top()) && c == 'b') {
                    result.pop();
                } else if (!result.empty() && isupper(result.top()) && c == 'B') {
                    result.pop();
                }
            } else {
                result.push(c);
            }
        }

        string typedString;
        while (!result.empty()) {
            typedString = result.top() + typedString;
            result.pop();
        }

        cout << typedString << endl;
    }

    return 0;
}
