#include "solution190.h"

#include <cinttypes>

namespace Leetcode {

uint32_t Solution190::reverseBits(uint32_t n) {
    // TC:O(1), SC:O(1)
    uint32_t ret = 0;
    for (int i = 0; i < 32; i++) {
        ret *= 2;
        ret += n%2;
        n /= 2;
    }
    return ret;
}

}   // namespace Leetcode
