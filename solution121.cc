#include "solution121.h"

#include <vector>

namespace Leetcode {

int Solution121::maxProfit(std::vector<int>& prices) {
    // TC:O(N), SC:O(1)
    int max_profit = 0;
    int min_price = -1;
    for (int i = 0; i < prices.size(); ++i) {
        if (i == 0) {
            min_price = prices[0];
        }
        max_profit = std::max(max_profit, prices[i] - min_price);
        min_price = std::min(min_price, prices[i]);
    }
    return max_profit;
}

}   // namespace Leetcode 
