#include "solution2799.h"

#include <unordered_map>
#include <vector>

namespace Leetcode {

int countCompleteSubarrays(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    std::unordered_map<int, int> cur_freq;
    int left = 0, right = 0, ret = 0;
    while (right < nums.size()) {
        ++cur_freq[nums[right]];
        while (left <= right && cur_freq.size() == freq.size()) {
            ret += (nums.size() - right);
            --cur_freq[nums[left]];
            if (cur_freq[nums[left]] == 0) {
                cur_freq.erase(nums[left]);
            }
            ++left;
        }
        ++right;
    }
    return ret;
}

}   // namespace Leetcode
