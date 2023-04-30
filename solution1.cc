// Leetcode 1: Two Sum
#include "solution1.h"
#include <iostream>
#include <vector>
#include <unordered_map>

namespace {

std::vector<int> Solution1::twoSum(std::vector<int>& nums, int target) {
    // TC:O(N), SC:O(N), N = nums.size()
    std::unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
        m.emplace(nums[i], i);
    }

    for (int i = 0; i < nums.size(); i++) {
        int remained = target - nums[i];
        if (m.find(remained) != m.end() && m[remained] != i) {
            return {i, m[remained]};
        }
    }
    return {};
}

} // namespace