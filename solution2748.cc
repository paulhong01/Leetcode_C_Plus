#include "solution2748.h"

#include <numeric>
#include <vector>

namespace Leetcode {

int Solution2748::countBeautifulPairs(std::vector<int>& nums) {
    // TC:O(NlogM), SC:O(1)
    int num_count[10] = {};
    int res = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 1; j < 10; j++) {
            if (std::gcd(j, nums[i]%10) == 1) {
                res += num_count[j];
            }
        }

        int cur_num = nums[i];
        while (cur_num >= 10) {
            cur_num /= 10;
        }
        num_count[cur_num]++;
    }
    return res;
}

}   // namespace Leetcode
