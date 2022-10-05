#include "solution123.h"

#include <vector>

namespace Leetcode {
int Solution123::maxProfit(std::vector<int>& prices) {
    // TC:O(N), SC:O(N)
    if (prices.size() == 0) {
        return 0;
    }
    
    std::vector<std::vector<int>> dp(3, std::vector<int>(prices.size(), 0));
    for (int k = 1; k <= 2; k++) {
        int min_val = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            min_val = std::min(min_val, prices[i] - dp[k-1][i-1]);
            dp[k][i] = std::max(dp[k][i-1], prices[i] - min_val);
        }
    }
    return dp[2][prices.size()-1];
}
}   // namespace Leetcode