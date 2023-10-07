#include "solution2841.h"

#include <unordered_map>
#include <vector>

namespace Leetcode {

long long Solution2841::maxSum(std::vector<int>& nums, int m, int k) {
    // TC:O(N), SC:O(N)
    std::unordered_map<int, int> count;
    long long cur_sum = 0, max_sum = 0; 
    for (int i = 0; i < k; i++) {
        cur_sum += nums[i];
        count[nums[i]]++;
    }
    if (count.size() >= m) {
        max_sum = cur_sum;
    }

    for (int i = k; i < nums.size(); i++) {
        cur_sum += (nums[i] - nums[i-k]);
        count[nums[i]]++;
        count[nums[i-k]]--;
        if (count[nums[i-k]] == 0) {
            count.erase(nums[i-k]);
        }

        if (count.size() >= m) {
            max_sum = std::max(max_sum, cur_sum);
        }
    }
    return max_sum;
}

}   // namespace Leetcode
