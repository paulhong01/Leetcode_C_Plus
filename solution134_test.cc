#include "solution134.h"

#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution134Test, ValidStartPoint) {
    Solution134 sol;
    int gas_array[5] = {1,2,3,4,5};
    std::vector<int> gas(std::begin(gas_array), std::end(gas_array));
    int cost_array[5] = {3,4,5,1,2};
    std::vector<int> cost(std::begin(cost_array), std::end(cost_array)); 

    EXPECT_EQ(sol.canCompleteCircuit(/*gas=*/gas,/*cost=*/cost), 3);
}

TEST(Solution134Test, NoValidStartShouldReturnMinusOne) {
    Solution134 sol;
    int gas_array[3] = {2,3,4};
    std::vector<int> gas(std::begin(gas_array), std::end(gas_array));
    int cost_array[3] = {3,4,3};
    std::vector<int> cost(std::begin(cost_array), std::end(cost_array)); 

    EXPECT_EQ(sol.canCompleteCircuit(/*gas=*/gas,/*cost=*/cost), -1);
}

}   // namespace
}   // namespace Leetcode
