#include "solution128.h"

#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution128Test, BasicTest) {
    Solution128 sol;

    EXPECT_EQ(sol.longestConsecutive({100,4,200,1,3,2}), 4);
}

}   // namespace
}   // namespace Leetcode