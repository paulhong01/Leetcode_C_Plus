#include "solution2615.h"

#include <map>
#include <vector>

namespace Leetcode {

std::vector<long long> distance(std::vector<int>& nums) {
    // TC:O(N), SC:O(N)
    std::vector<long long> ret(nums.size());
    std::map<int, long long> sum_l, sum_r, cnt_l, cnt_r;
    for (int i = 0; i < nums.size(); i++) {
        ret[i] += (cnt_l[nums[i]]*i - sum_l[nums[i]]);
        sum_l[nums[i]] += i;
        cnt_l[nums[i]]++;
    }   

    for (int i = nums.size()-1; i >= 0; i--) {
        ret[i] += (sum_r[nums[i]] - cnt_r[nums[i]]*i);
        sum_r[nums[i]] += i;
        cnt_r[nums[i]]++; 
    }
    return ret;
}

}   // namespace Leetcode
