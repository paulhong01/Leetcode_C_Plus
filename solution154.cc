#include "solution154.h"

#include <vector>

namespace Leetcode {
int findMin(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    int l = 0, r = nums.size()-1;
    while (l < r) {
        int m = (l + r)/2;
        if (nums[m] > nums[r]) {
            l = m + 1;
        } else if (nums[m] < nums[r]) {
            r = m;
        } else {
            if (r != 0 && nums[r-1] <= nums[r]) {
                r--;
            } else {
                return nums[r];
            }
        }
    }
    return nums[l];
}

}   // namespace Leetcode
