#include "solution137.h"

#include <vector>

namespace Leetcode {
int Solution137::singleNumberWithThreeNum(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    int seen_once = 0, seen_twice = 0;
    for (int num : nums) {
        seen_once = (num ^ seen_once)&~seen_twice;
        seen_twice = (num ^ seen_twice)&~seen_once;
    }
    return seen_once;
}
}
