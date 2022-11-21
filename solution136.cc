#include "solution136.h"

#include <vector>

namespace Leetcode {
int Solution136::singleNumber(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    int ret = 0;
    for (int num: nums) {
        ret ^= num;
    }
    return ret;
}
}   // namespace Leetcode
