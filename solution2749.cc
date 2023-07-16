#include "solution2749.h"

namespace Leetcode {
namespace {

int setBits(long n) {
    int c = 0;
    while (n > 0) {
        c += n%2;
        n /= 2;
    }
    return c;
}

}   // namespace

int makeTheIntegerZero(int num1, int num2) {
    // TC:O(1), SC:O(1)
    if (num1 < num2) {
        return -1;
    }

    for (int k = 0; k <= 60; k++) {
        long x = (long)num1 - (long)num2*k;

        if (k <= x && setBits(x) <= k) {
            return k;
        }
    }
    return -1;
}
}   // namespace Leetcode
