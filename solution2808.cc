#include "solution2808.h"

#include <vector>
#include <unordered_map>

namespace Leetcode {

int Solution2808::minimumSeconds(std::vector<int>& nums) {
    // TC:O(N), SC:O(N)
    std::unordered_map<int, std::vector<int>> value_to_pos;
    for (int i = 0; i < nums.size(); i++) {
        value_to_pos[nums[i]].push_back(i);
    }

    int ret = nums.size();
    for (auto& [value, pos] : value_to_pos) {
        pos.push_back(pos[0] + nums.size());
        int cur = 0;
        for (int i = 1; i < pos.size(); i++) {
            cur = std::max(cur, (pos[i] - pos[i-1])/2);
        }
        ret = std::min(ret, cur);
    }
    return ret;
}

}   // namespace Leetcode
