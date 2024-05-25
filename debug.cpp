#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i ; j++){
            int n1 = matrix[i][j];
            int n2 = matrix[j][i];
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    for(int i=0 ; i<n ; i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(nums);
    
    return 0;
}