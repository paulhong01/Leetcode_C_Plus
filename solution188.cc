#include "solution188.h"

#include <vector>

namespace Leetcode {

int Solution188::maxProfit(int k, std::vector<int>& prices) {
    // TC:O(kN), SC:O(kN)
    int N = prices.size();

    if (k >= 2/N) {
        int max_profit = 0;
        for (int i = 1; i < N; i++) {
            if (prices[i] > prices[i-1]) {
                max_profit += (prices[i] - prices[i-1]);
            }
        }
        return max_profit;
    }

    std::vector<std::vector<int>> dp(k+1, std::vector<int>(N, 0));
    /*
    dp[i][j] = max(dp[i][j-1], max(dp[i-1][jj] + prices[j] - prices[jj]))
    */
    for (int i = 1; i <= k; i++) {
        int local_max = dp[i-1][0] - prices[0];
        for (int j = 1; j < N; j++) {
            dp[i][j] = std::max(dp[i][j-1], prices[j] + local_max);
            local_max = std::max(local_max, dp[i-1][j] - prices[j]);
        }
    }
    return dp[k][N-1];
}

}   // namespace Leetcode
