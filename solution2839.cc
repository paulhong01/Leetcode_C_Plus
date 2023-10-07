#include "solution2839.h"

#include <string>

namespace Leetcode {
namespace {

std::string swap(std::string s, int idx1, int idx2) {
    std::string ret = s;
    ret[idx1] = s[idx2];
    ret[idx2] = s[idx1];
    return ret;
}

}

bool canBeEqual(std::string s1, std::string s2) {
    // TC:O(N), SC:O(N)
    if (s1 == s2) {
        return true;
    }

    std::string swap_first = swap(s1, 0, 2);
    if (swap_first == s2) {
        return true;
    }
    if (swap(swap_first, 1, 3) == s2) {
        return true;
    }
    if (swap(s1, 1, 3) == s2) {
        return true;
    }
    return false;
}

}   // namespace Leetcode
