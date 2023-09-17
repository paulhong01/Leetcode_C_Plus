#include "solution2829.h"

#include <unordered_set>

namespace Leetcode {

int Solution2829::minimumSum(int n, int k) {
    std::unordered_set<int> s;
    int min_sum = 0, idx = 1, count = 0;
    for (int idx = 1; count < n; ++idx) {
        if (s.count(idx) != 0) {
            continue;
        }
        s.insert(k-idx);
        min_sum += idx;
        ++count;
    }
    return min_sum;
}

}   // namespace Leetcode
