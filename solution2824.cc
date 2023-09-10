#include "solution2824.h"

#include <vector>

namespace Leetcode {

int Solution2824::countPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    int l = 0, r = nums.size()-1;
    int count = 0;
    while (l < r) {
        if (nums[l] + nums[r] < target) {
            count += (r - l);
            l++;
        } else {
            r--;
        }
    }
    return count;
}

} // namespace Leetcode
