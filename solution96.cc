#include "solution96.h"

#include <vector>

namespace Leetcode {
int Solution96::numTrees(int n) {
    if (n == 1) {
        return 1;
    }
    std::vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i] += dp[j-1] * dp[i-j];
        }
    }
    return dp[n];
}
}   // namespace Leetcode