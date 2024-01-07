#include "solution2894.h"

namespace Leetcode {

int Solution2894::differenceOfSums(int n, int m) {
    // TC:O(N), SC:O(1)
    int num1 = 0, num2 = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % m != 0) {
            num1 += i;
        } else {
            num2 += i;
        }
    }
    return num1 - num2;
}

}   // namespace Leetcode
