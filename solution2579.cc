#include "solution2579.h"

namespace Leetcode {

long long Solution2579::coloredCells(int n) {
    // TC:O(N), SC:O(1)
    if (n == 1 ) {
        return 1;
    }

    long long ret = 1;
    for (int i = 2; i <= n; i++) {
        ret += (i-1)*4;
    }
    return ret;
}

}   // namespace Leetcode
