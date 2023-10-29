#include "solution2855.h"

#include <vector>

namespace Leetcode {

int minimumRightShifts(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    int non_sorted_idx = -1;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i-1]) {
            continue;
        }
        if (non_sorted_idx == -1) {
            non_sorted_idx = i;
        } else {
            return -1;
        }
    }
    if (non_sorted_idx == -1) {
        return 0;
    } else if (nums[nums.size()-1] > nums[0]) {
        return -1;
    } 
    return nums.size()-non_sorted_idx;
}

}   // namespace Leetcode
