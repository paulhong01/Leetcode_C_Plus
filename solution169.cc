#include "solution169.h"

#include <vector>

namespace Leetcode {
int Solution169::majorityElement(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    int majority_value = nums[0];
    int majority_freq = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != majority_value) {
            majority_freq--;
            if (majority_freq == 0) {
                majority_value = nums[i];
                majority_freq = 1;
            }
        } else {
            majority_freq++;
        }
    }
    return majority_value;
}

}   // namespace Leetcode
