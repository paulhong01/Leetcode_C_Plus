#include "solution560.h"

#include <map>
#include <unordered_map>

namespace Leetcode {

int Solution560::subarraySum(std::vector<int>& nums, int k) {
    // TC:O(N), SC:O(N)
    int count = 0, prefixsum = 0;
    std::unordered_map<int, int> visited;
    visited[0] = 1;
    for (int i = 0; i < nums.size(); i++) {
        prefixsum += nums[i];
        if (visited.count(prefixsum - k) != 0) {
            count += visited[prefixsum - k];
        }
        visited[prefixsum] = visited[prefixsum]+1;
    }
    return count;
}

}   // namespace Leetcode
