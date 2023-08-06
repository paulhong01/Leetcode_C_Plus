#include "solution2784.h"

#include <vector>

namespace Leetcode {

bool isGood(std::vector<int>& nums) {
    int N = nums.size() - 1;
    std::vector<int> count(N);
    for (int num : nums) {
        if (num > N) {
            return false;
        }
        count[num-1]++;
    }

    for (int i = 0; i < N; ++i) {
        if (i == N-1) {
            if (count[i] != 2) {
                return false;
            }
        } else if (count[i] != 1) {
            return false;
        }
    }
    return true;
}

} // namespace Leetcode
