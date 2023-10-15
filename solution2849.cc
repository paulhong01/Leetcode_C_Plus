#include "solution2849.h"

#include <algorithm>
#include <cstdlib>

namespace Leetcode {

bool Solution2849::isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
    // TC:O(1), SC:O(1)
    int xdiff = std::abs(sx - fx), ydiff = std::abs(sy - fy);
    if(xdiff == 0 && ydiff == 0 && t == 1) return false;
    return (std::min(xdiff, ydiff) + std::abs(xdiff - ydiff)) <= t;
}

}   // namespace Leetcode
