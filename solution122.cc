#include "solution122.h"

#include <vector>

namespace Leetcode {
int Solution122::maxProfit(std::vector<int>& prices) {
    // TC:O:(N), SC:(1)
    int max_profit = 0;
    int cur_min = -1;
    for (int i = 0; i < prices.size(); i++) {
        if (i == 0) {
            cur_min = prices[i];
        }
        if (prices[i] > cur_min) {
            max_profit += (prices[i] - cur_min);
            cur_min = prices[i];
        }
        cur_min = std::min(cur_min, prices[i]);
    }
    return max_profit;
}
}   // namespace Leetcode