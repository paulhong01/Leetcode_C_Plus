#include "solution191.h"

#include <cinttypes>

namespace Leetcode {

int Solution191::hammingWeight(uint32_t n) {
    // TC:O(1), SC:O(1)
    int ret = 0;
    for (int i = 0; i < 32; i++) {
        // cout << n << endl;
        if (n % 2 == 1) {
            ret++;
        }
        n /= 2;
    }
    return ret;
}

}   // namespace Leetcode
