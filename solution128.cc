#include "solution128.h"

#include <set>
#include <vector>

namespace Leetcode {
int Solution128::longestConsecutive(std::vector<int>& nums) {
    // TC:O(N), SC:O(N)
    std::set<int> num_set;
    for (int n : nums) {
        num_set.insert(n);
    }
    
    int ret = 0;
    for (int n : nums) {
        if (num_set.count(n) == 0) {
            continue;
        }
        
        int cur_num = n;
        int cur_length = 1;
        while (num_set.count(cur_num+1) != 0) {
            cur_num++;
            cur_length++;
        }
        ret = std::max(ret, cur_length);
    }
    return ret;
}
}   // namespace Leetcode