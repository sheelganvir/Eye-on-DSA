#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> replaceMax(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> maxValues(n, INT16_MIN);

    // Find maximum value in each column
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (matrix[i][j] > maxValues[j]) {
                maxValues[j] = matrix[i][j];
            }
        }
    }

    // Replace -1 with maximum value in respective column
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = maxValues[j];
            }
        }
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{1,2,-1},{4,-1,6},{7,8,9}};

    vector<vector<int>> answer = replaceMax(matrix);

    // Output the modified matrix
    for (int i = 0; i < answer.size(); ++i) {
        for (int j = 0; j < answer[i].size(); ++j) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
