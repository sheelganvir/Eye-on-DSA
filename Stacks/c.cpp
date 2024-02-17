#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxOperations(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int maxOps = 0;
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum % 2 == 0 && nums[left] != nums[right]) {
            int target = sum / 2;
            int count = 0;
            int i = left, j = right;
            while (i < j && nums[i] + nums[j] == sum) {
                count++;
                i++;
                j--;
            }
            maxOps = max(maxOps, count);
        }
        left++;
        right--;
        
    }
    return maxOps;
}

int main() {
    vector<int> nums = {3, 2, 1, 4, 5};
    cout << "Output: " << maxOperations(nums) << endl;

    vector<int> nums2 = {3, 2, 6, 1, 4};
    cout << "Output: " << maxOperations(nums2) << endl;

    return 0;
}
