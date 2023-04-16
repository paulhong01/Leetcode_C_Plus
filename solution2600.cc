#include "solution2600.h"

namespace Leetcode {

int Solution2600::kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    // TC:O(1), SC:O(1)
    if (numOnes >= k) {
        return k;
    }
    if (numOnes + numZeros >= k) {
        return numOnes;
    }
    return numOnes - (k - numOnes - numZeros);
}

}   // namespace Leetcode
