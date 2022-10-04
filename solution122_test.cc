#include "solution122.h"

#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution122Test, BasicTest) {
    Solution122 sol;

    std::vector<int> prices = {7,1,5,3,6,4};
    EXPECT_EQ(sol.maxProfit(prices), 7);
}

TEST(Solution122Test, NoTransactionShouldReturnZero) {
    Solution122 sol;

    std::vector<int> prices = {7,6,4,3,1};
    EXPECT_EQ(sol.maxProfit(prices), 0);
}

}   //  namespace     
}   //  namespace Leetcode