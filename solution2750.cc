#include "solution2750.h"

#include <vector>

namespace Leetcode {

int numberOfGoodSubarraySplits(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    long long ans = 1, m = 1000000007, count  = 0;
    int i = 0;
    while (i < nums.size() && nums[i] == 0) {
        i++;
    }
    if (i == nums.size()) {
        return 0;
    }

    for (; i < nums.size(); i++) {
        if (nums[i] == 1) {
            ans = (ans * (count+1))%m;
            count = 0;
        } else {
            count++;
        }
    }
    return ans;
}

}   // namespace Leetcode
