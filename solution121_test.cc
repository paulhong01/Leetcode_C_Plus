#include "solution121.h"

#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution121Test, BasicTest) {
    Solution121 sol;

    std::vector<int> prices = {7,1,5,3,6,4};
    EXPECT_EQ(sol.maxProfit(prices), 5);
}

TEST(Solution121Test, NoTransactionShouldReturnZero) {
    Solution121 sol;

    std::vector<int> prices = {7,6,4,3,1};
    EXPECT_EQ(sol.maxProfit(prices), 0);
}


}   // 
}   // namespace Leetcode 
