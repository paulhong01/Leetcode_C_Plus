#include "solution2826.h"

namespace Leetcode {

int Solution2826::minimumOperations(std::vector<int>& nums) {
    // TC:O(N^2), SC:O(N)
    int N = nums.size();
    int longest_non_decreasing = 1;
    std::vector<int> dp(N, 0);
    dp[0] = 1;
    for (int i = 1; i < N; i++) {
        int maxval = 0;
        for (int j = 0; j < i; j++) {
            if (nums[i] >= nums[j]) {
                maxval = std::max(maxval, dp[j]);
            }
        }
        dp[i] = maxval + 1;
        longest_non_decreasing = std::max(longest_non_decreasing, dp[i]);
    }
    return N - longest_non_decreasing;
}

}   // namespace Leetcode
