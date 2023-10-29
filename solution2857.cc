#include "solution2857.h"

#include <vector>
#include <unordered_map>

namespace Leetcode {

int Solution2857::countPairs(std::vector<std::vector<int>>& coordinates, int k) {
    // TC:O(NK), SC:O(N)
    std::unordered_map<int, std::unordered_map<int, int>> count;
    int res = 0;
    for (auto& c : coordinates) {
        for (int x = 0; x <= k; x++)
            if (count[c[0] ^ x].count(c[1] ^ (k - x)))
                res += count[c[0] ^ x][c[1] ^ (k - x)];
        count[c[0]][c[1]]++;
    }
    return res;
}

}   // namespace Leetcode
