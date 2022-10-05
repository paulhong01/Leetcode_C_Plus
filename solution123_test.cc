#include "solution123.h"

#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution123Test, BasicTest) {
    Solution123 sol;

    std::vector<int> prices = {3,3,5,0,0,3,1,4};
    EXPECT_EQ(sol.maxProfit(prices), 6);
}

TEST(Solution123Test, NoTransactionShouldReturnZero) {
    Solution123 sol;

    std::vector<int> prices = {7,6,4,3,1};
    EXPECT_EQ(sol.maxProfit(prices), 0);
}

}   // namespace
}   // namespace Leetcode