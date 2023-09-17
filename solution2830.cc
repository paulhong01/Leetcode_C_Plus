#include "solution2830.h"

#include <vector>

namespace Leetcode {

int Solution2830::maximizeTheProfit(int n, std::vector<std::vector<int>>& offers) {
    // TC:O(N), SC:O(N)
    std::vector<int> dp(n+1);
    std::vector<std::vector<std::vector<int>>> m(n);
    for (auto& offer : offers) {
        m[offer[1]].push_back(offer);
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i-1];
        for (auto& offer : m[i-1]) {
            dp[i] = std::max(dp[i], dp[offer[0]]+offer[2]);
        }
    }
    return dp[n];
}

}   // namespace Leetcode
