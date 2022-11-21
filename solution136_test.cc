#include "solution136.h"

#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution136Test, BasicTest) {
    Solution136 sol;
    int nums[3] = {2, 2, 1};
    std::vector<int> num_vec(std::begin(nums), std::end(nums));
    EXPECT_EQ(sol.singleNumber(num_vec), 1);
}

}   // namespace
}   // namespace Leetcode