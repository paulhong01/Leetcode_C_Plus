#include "solution198.h"

#include <vector>

namespace Leetcode {

int Solution198::rob(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    // dp[i]: max num of money until i
    // dp[i] = max(dp[i-1], dp[i-2]+nums[i])
    if (nums.size() == 1) {
        return nums[0];
    } else if (nums.size() == 2) {
        return std::max(nums[1], nums[0]);
    }

    int N = nums.size();
    int prev2 = nums[0];
    int prev1 = std::max(prev2, nums[1]);
    for (int i = 2; i < N; i++) {
        int cur_max = std::max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = cur_max;
    }
    return prev1;
}

}   // namespace Leetcode
