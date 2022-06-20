#include "solution96.h"

#include <gtest/gtest.h>

namespace Leetcode {
namespace {
TEST(Solution96, InputIsOneReturnsOne) {
    Solution96 sol;
    EXPECT_EQ(sol.numTrees(1), 1);
}

TEST(Solution96, BasicTest) {
    Solution96 sol;
    EXPECT_EQ(sol.numTrees(3), 5);
}

}   // namespace
}   // namespace Leetcode