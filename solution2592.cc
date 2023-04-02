#include "solution2592.h"

#include <vector>

namespace Leetcode {
int maximizeGreatness(std::vector<int>& nums) {
    // TC:O(NlogN), SC:O(1)
    std::sort(nums.begin(), nums.end());
    int res = 0;
    for (const auto num: nums) {
        if (num > nums[res]) {
            res++;
        }
    }
    return res;
}
}   // namespace Leetcode
