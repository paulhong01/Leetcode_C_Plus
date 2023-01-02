#include "solution153.h"

#include <vector>

namespace Leetcode {
int findMin(std::vector<int>& nums) {
    // TC:O(log(N)), SC:O(1)
    int l = 0, h = nums.size()-1;
    while (l <= h) {
        int m = (l + h)/2;
        if ((m == 0 || nums[m] < nums[m-1]) && (m == nums.size()-1 || nums[m] < nums[m+1])) {
            return nums[m];
        }
        if (nums[m] > nums[h]) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return -1;
}
}   // namespace Leetcode
