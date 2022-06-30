#include "solution97.h"

#include <gtest/gtest.h>

namespace Leetcode {
namespace {
TEST(Solution97Test, isInterleaveReturnsTrue) {
    Leetcode::Solution97 sol;

    EXPECT_TRUE(sol.isInterleave("aabcc", "dbbca", "aadbbcbcac"));
}

TEST(Solution97Test, isInterleaveReturnsFalse) {
    Leetcode::Solution97 sol;

    EXPECT_FALSE(sol.isInterleave("aabcc", "dbbca", "aadbbbaccc"));
}
}   // namespace
}   // namespace Leetcode
