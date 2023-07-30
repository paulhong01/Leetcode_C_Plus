#include "solution2778.h"

namespace Leetcode {

int sumOfSquares(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    int ret = 0, N = nums.size();
    for (int i = 1; i <= N; i++) {
        if (N%i != 0) {
            continue;
        }
        ret += (nums[i-1]*nums[i-1]);
    }
    return ret;
}

} // namespace Leetcode
