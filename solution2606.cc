#include "solution2606.h"

#include <string>
#include <vector>
#include <unordered_map>

namespace Leetcode {

int Solution2606::maximumCostSubstring(std::string s, std::string chars, std::vector<int>& vals) {
    // TC:O(N+M), SC:O(M), where N = s.size() and M = chars.size()
    std::unordered_map<char, int> special_cost;
    for (int i = 0; i < chars.size(); i++) {
        special_cost[chars[i]] = vals[i];
    }

    int cur_max_cost = 0;
    int max_cost = 0;
    for (char character : s) {
        int cur_cost = special_cost.count(character) != 0?special_cost[character]:character - 'a'+1;
        cur_max_cost = std::max(cur_max_cost, 0) + cur_cost;
        max_cost = std::max(max_cost, cur_max_cost);
    }
    return max_cost;
}

}   // namespace Leetcode
