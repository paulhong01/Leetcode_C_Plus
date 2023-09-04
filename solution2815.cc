#include "solution2815.h"

#include <vector>

namespace Leetcode {
namespace {
    int maxDigit(int num) {
        int max_digit = num % 10;
        while (num != 0) {
            max_digit = std::max(max_digit, num % 10);
            num /= 10;
        }
        return max_digit;
    }
}   // namespace

int Solution2815::maxSum(std::vector<int>& nums) {
    // TC:O(N^2), SC:O(1)
    int max_sum = -1;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (maxDigit(nums[i]) == maxDigit(nums[j])) {
                max_sum = std::max(max_sum, nums[i] + nums[j]);
            }
        }
    }    
    return max_sum;
}

}   // namespace Leetcode
