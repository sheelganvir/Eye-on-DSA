#include <iostream>
#include <vector>

int longestSubarraySumK(int N, int K, const std::vector<int>& NUMS) {
    int maxLength = 0;
    int currentSum = 0;
    int left = 0;

    for (int right = 0; right < N; ++right) {
        currentSum += NUMS[right];

        while (currentSum > K) {
            currentSum -= NUMS[left];
            left++;
        }

        if (currentSum == K && (right - left + 1) > maxLength) {
            maxLength = right - left + 1;
        }
    }

    return maxLength;
}

int main() {
    int N = 5;
    int K = 4;
    std::vector<int> NUMS = {1, 2, 1, 0, 1};

    int result = longestSubarraySumK(N, K, NUMS);

    std::cout << "Length of the longest subarray with sum " << K << ": " << result << std::endl;

    return 0;
}
