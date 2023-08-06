#include "solution2786.h"

#include <vector>

namespace Leetcode {

long long maxScore(std::vector<int>& nums, int x) {
    // TC:O(N), SC:O(1)
    long long even = nums[0] - (nums[0]%2 == 1? x : 0);
    long long odd = nums[0] - (nums[0]%2 == 1? 0: x);

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] % 2 == 1) {
            odd = nums[i] + std::max(odd, even - x);
        } else {
            even = nums[i] + std::max(even, odd - x);
        }
    }
    return std::max(odd, even);
}

}   // namespace Leetcode
