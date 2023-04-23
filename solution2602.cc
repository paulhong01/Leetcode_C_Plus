#include "solution2602.h"

#include <vector>

namespace Leetcode {

std::vector<long long> minOperations(std::vector<int>& nums, std::vector<int>& queries) {
    // TC:O((N+M)*log(N)), SC:O(N)
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    std::vector<long long> ans, prefix(n + 1);
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + (long long) nums[i];
    for (int& x : queries) {
        int i = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
        ans.push_back(1LL * x * (2 * i - n) + prefix[n] - 2 * prefix[i]);
    }
    return ans;
}

}   // namespace Leetcode
