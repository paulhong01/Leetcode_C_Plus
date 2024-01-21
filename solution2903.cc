#include "solution2903.h"

#include <vector>

namespace Leetcode {

std::vector<int> Solution2903::findIndices(std::vector<int>& nums, int indexDifference, int valueDifference) {
    // TC:O(N), SC:O(1)
    int min_index = 0, max_index = 0;
    for (int i = indexDifference; i < nums.size(); i++) {
        if (nums[i-indexDifference] < nums[min_index]) {
            min_index = i - indexDifference;
        }
        if (nums[i-indexDifference] > nums[max_index]) {
            max_index = i - indexDifference;
        }
        if (nums[i]-nums[min_index] >= valueDifference) {
            return {min_index, i};
        }
        if (nums[max_index] - nums[i] >= valueDifference) {
            return {max_index, i};
        }
    }
    return {-1, -1};
}

}   // namespace Leetcode
