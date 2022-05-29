#include "solution87.h"

#include <gtest/gtest.h>

namespace Leetcode {
namespace {

TEST(Solution87Test, isScambleReturnsTrue) {
    Solution87 sol;

    EXPECT_TRUE(sol.isScramble("great", "rgeat"));
}

TEST(Solution87Test, isScambleReturnsFalse) {
    Solution87 sol;

    EXPECT_FALSE(sol.isScramble("abcde", "caebd"));
}

}   // namespace
}   // namespace Leetcode
