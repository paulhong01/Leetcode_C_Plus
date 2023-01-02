#include "solution152.h"

#include <vector>

namespace Leetcode {
int Solution152::maxProduct(std::vector<int>& nums) {
    // TC:O(N), SC:O(N)
    std::vector<int> cur_max(nums.size());
    std::vector<int> cur_min(nums.size());
    cur_max[0] = nums[0];
    cur_min[0] = nums[0];
    int ret = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) {
            cur_max[i] = std::max(cur_min[i-1]*nums[i], nums[i]);
            cur_min[i] = std::min(cur_max[i-1]*nums[i], nums[i]);
        } else {
            cur_max[i] = std::max(cur_max[i-1]*nums[i], nums[i]);
            cur_min[i] = std::min(cur_min[i-1]*nums[i], nums[i]);
        }
        ret = std::max(ret, cur_max[i]);
    }
    return ret;
}
}
