#include "solution2610.h"

#include <vector>
#include <unordered_map>

namespace Leetcode {

std::vector<std::vector<int>> findMatrix(std::vector<int>& nums) {
    // TC:O(N), SC:O(N)
    std::unordered_map<int, int> freq;
    std::vector<std::vector<int>> ret;
    for (const auto num : nums) {
        freq[num]++;
        if (ret.size() < freq[num]) {
            ret.push_back(std::vector<int>());
        }
        ret[freq[num]-1].push_back(num);
    }
    return ret;
}

}   // namespace Leetcode