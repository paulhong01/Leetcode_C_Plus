#include "solution2770.h"

#include <vector>

namespace Leetcode {

int maximumJumps(std::vector<int>& nums, int target) {
    // TC:O(N^2), SC:O(N)
    std::vector<int> dp(nums.size(), -1);
    dp[0] = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (std::abs(nums[i] - nums[j]) <= target && dp[j] != -1) {
                dp[i] = std::max(dp[i], dp[j]+1);
            }
        }
    }
    return dp[nums.size()-1] == 0?-1:dp[nums.size()-1];
}

}   // namespace Leetcode
