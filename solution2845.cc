#include "solution2845.h"

#include <vector>
#include <unordered_map>

namespace Leetcode {

long long countInterestingSubarrays(std::vector<int>& nums, int mod, int k) {
    // TC:O(N), SC:O(N)
    long long res = 0;
    int acc = 0;
    std::unordered_map<int, int> count;
    count[0] = 1;
    for (int a : nums) {
        acc = (acc + (a % mod == k ? 1 : 0)) % mod;
        res += count[(acc - k + mod) % mod];
        count[acc]++;
    }
    return res;
}

}   // namesapce Leetcode
