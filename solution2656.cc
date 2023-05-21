#include "solution2656.h"

#include <vector>

namespace Leetcode {

int Solution2656::maximizeSum(std::vector<int>& nums, int k) {
    // TC:O(N), SC:O(1)
    int max_value = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        max_value = std::max(max_value, nums[i]);
    }

    return max_value*k + (k-1)*k/2;
}

}   // namespace Leetcode
