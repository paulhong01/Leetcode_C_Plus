#include "solution2588.h"

#include <vector>
#include <unordered_map>

namespace Leetcode {

long long beautifulSubarrays(std::vector<int>& nums) {
    std::unordered_map<int, int> visited{{0, 1}};
    long long result = 0, prefix = 0;
    for (const auto num : nums) {
        prefix ^= num;
        result += visited[prefix];
        visited[prefix]++;
    }
    return result;
}

}   // namespace Leetcode
