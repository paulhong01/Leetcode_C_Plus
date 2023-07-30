#include "solution2780.h"

#include <vector>

namespace Leetcode {

int minimumIndex(const std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    int dominant = nums[0],count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != dominant) {
            count--;
        } else {
            count++;
        }

        if (count == 0) {
            dominant = nums[i];
            count = 1;
        }
    }

    int dominant_freq = 0;
    for (int num : nums) {
        if (num == dominant) {
            dominant_freq++;
        }
    }

    count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == dominant) {
            count++;
        }

        if ((count*2 > i+1) && ((dominant_freq-count)*2 > (nums.size()-i-1))) {
            return i;
        }
    }
    return -1;
}

}   // namespace Leetcode
