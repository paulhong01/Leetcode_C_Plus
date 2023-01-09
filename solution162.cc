#include "solution162.h"

#include <vector>

namespace Leetcode {
int findPeakElement(std::vector<int>& nums) {
    // TC:O(log(N)), SC:O(1)
    int l = 0, r = nums.size()-1;
    while (l <= r) {
        int m = (l + r)/2;
        if ((m == 0 || nums[m] > nums[m-1]) && (m == nums.size()-1 || nums[m] > nums[m+1])) {
            return m;
        }
        if (nums[m] > nums[m+1]) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    } 
    return -1;
}

}   // namespace Leetcode
