#include "solution2779.h"

namespace Leetcode {

int maximumBeauty(std::vector<int>& nums, int k) {
    // TC:O(NLogN), SC:O(1)
    sort(nums.begin(),nums.end());

    int start = 0, ans = 0;
    for(int i=0; i<nums.size(); i++){
        while(nums[i]-nums[start] > 2*k)
            start++;
        ans = std::max(ans,i-start+1);
    }
    return ans;
}

} // namespace Leetcode
