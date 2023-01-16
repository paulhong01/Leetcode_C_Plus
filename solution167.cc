#include "solution167.h"

#include <vector>

namespace Leetcode {
std::vector<int> twoSum(std::vector<int>& numbers, int target) {
    // TC:O(N), SC:O(1)
    int l = 0, r = numbers.size()-1;
    std::vector<int> ret;
    while (l < r) {
        int cur_sum = numbers[l] + numbers[r];
        if (cur_sum == target) {
            ret.push_back(l+1);
            ret.push_back(r+1);
            return ret;
        } else if (cur_sum < target) {
            l++;
        } else {
            r--;
        }
    }
    return ret;
}

}   // namespace Leetcode
