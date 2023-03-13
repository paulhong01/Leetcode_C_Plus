#include "solution2580.h"

namespace Leetcode {
namespace {
int pow(int n) {
    int mod = 1000000007;
    if(n == 1) return 2;
    long long t = pow(n/2);
    t = (t * t)%mod;
    if(n%2) { return (t*2)%mod; }
    return t;
}

}   // namespace

int countWays(std::vector<std::vector<int>>& ranges) {
    // TC:O(NlogN), SC:O(1)
    std::sort(ranges.begin(), ranges.end(), [](std::vector<int>& lhs, std::vector<int>& rhs) {
        return lhs[0] < rhs[0];
    });
    int start = ranges[0][0], end = ranges[0][1];
    int merged_interval_size = 0;
    for (int i = 1; i < ranges.size(); i++) {
        if (ranges[i][0] <= end) {
            end = std::max(end, ranges[i][1]);
            continue;
        } 
        merged_interval_size++;
        start = ranges[i][0];
        end = ranges[i][1];
    }
    merged_interval_size++;
    return pow(merged_interval_size++);
}

}   // namespace Leetcode
