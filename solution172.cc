#include "solution172.h"

namespace Leetcode {
namespace {

// Returns the integer factorization by 5
int GetNumOfFive(int target) {
    int count = 0;
    while (target % 5 == 0) {
        count++;
        target /= 5;
    }
    return count;
}

}   // namespace

int trailingZeroes(int n) {
    // TC:O(log(n)), SC:O(1)
    int num_of_five = 0;
    for (int i = 1, cur = 5; cur <= n; i++, cur = 5*i) {
        num_of_five += GetNumOfFive(cur);
    }
    return num_of_five;
}

}   // namespace Leetcode
