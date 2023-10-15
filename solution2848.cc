#include "solution2848.h"

#include <unordered_set>
#include <vector>


namespace Leetcode {

int Solution2848::numberOfPoints(std::vector<std::vector<int>>& nums) {
    // TC:O(N^2), SC:O(1)
    std::unordered_set<int> set;
    for (const auto& num : nums) {
        for (int idx = num[0]; idx <= num[1]; idx++) {
            set.insert(idx);
        }
    }
    return set.size();
}

}
