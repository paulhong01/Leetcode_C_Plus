#include "solution2895.h"

#include <algorithm>
#include <vector>

namespace Leetcode {

int Solution2895::minProcessingTime(std::vector<int>& processorTime, std::vector<int>& tasks) {
    // TC:O(NlogN), SC:O(1)
    int N = processorTime.size();
    std::sort(processorTime.begin(), processorTime.end());
    std::sort(tasks.begin(), tasks.end());
    int max_time = processorTime[0] + tasks[(N-1)*4+3];
    for (int i = 1; i < N; i++) {
        max_time = std::max(max_time, processorTime[i] + tasks[(N-1-i)*4+3]);
    }
    return max_time;
}

}   // namespace Leetcode
