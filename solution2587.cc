#include "solution2587.h"

#include <vector>

namespace Leetcode {

int Solution2587::maxScore(std::vector<int>& nums) {
    // TC:O(NlogN), SC:O(1)
    long long ans = 0, sum = 0;
    std::sort(nums.begin(), nums.end());
    for(int i = nums.size()-1; i >= 0; --i){
        sum += nums[i];
        if(sum > 0) ans++;
        else break;
    }
    return ans;
}

}   // namespace Leetcode
