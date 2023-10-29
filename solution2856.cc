#include "solution2856.h"

#include <vector>
#include <unordered_map>

namespace Leetcode {

int minLengthAfterRemovals(std::vector<int>& nums) {
    // TC:O(N), SC:O(N)
    int n = nums.size();
    std::unordered_map<int, int> mp;
    for(int i : nums){
        mp[i]++;
    }
    int maxi = 0;
    for(auto it : mp){
        maxi = std::max(maxi, it.second);
    }
    if(maxi <= n/2){
        if(n%2){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 2*maxi - n;
}

}   // namespace Leetcode   
