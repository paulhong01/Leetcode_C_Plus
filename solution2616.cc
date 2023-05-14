#include "solution2616.h"

#include <vector>

namespace Leetcode {

int Solution2616::minimizeMax(std::vector<int>& nums, int p) {
    // TC:O(NlogN), SC:O(1)
    std::sort(nums.begin(), nums.end());
    int N = nums.size(), left = 0, right = nums[N-1] - nums[0];
    while (left < right) {
        int mid = (left + right)/2;
        int k = 0;
        for (int i = 1; i < N && k < p; ++i) {
            if (nums[i] - nums[i-1] <= mid) {
                k++;
                i++;
            }
        }

        if (k >= p) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

}   // namespace Leetcode
