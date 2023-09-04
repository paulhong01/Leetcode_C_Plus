#include "solution2817.h"

#include <set>
#include <vector>

namespace Leetcode {

int minAbsoluteDifference(std::vector<int>& nums, int x) {
    // TC:O(NlogN), SC:O(1)
    std::set<int> s;
    int ret = INT_MAX;
    for (int i = x; i < nums.size(); i++) {
        s.insert(nums[i-x]);

        auto it = s.upper_bound(nums[i]);
        if (it != s.begin()) {
            ret = std::min(ret, nums[i] - *prev(it));
        }
        if (it != s.end()) {
            ret = std::min(ret, *it - nums[i]);
        }
    }
    return ret;
}

}   // namespace Leetcode
