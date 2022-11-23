#include "solution137.h"

#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution137Test, BasicTest) {
    Solution137 sol;
    int nums[4] = {2,2,3,2};
    std::vector<int> num_vec(std::begin(nums), std::end(nums));
    EXPECT_EQ(sol.singleNumberWithThreeNum(num_vec), 3);
}

}   // namespace
}   // namespace Leetcode
