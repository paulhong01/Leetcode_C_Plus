#include "solution91.h"

#include <gtest/gtest.h>

namespace Leetcode {
namespace {

TEST(Solution91Test, BasicTest) {
    Solution91 sol;

    EXPECT_EQ(sol.numDecodings("226"), 3);
}

TEST(Solution91Test, InvalidZeroInputReturnsZero) {
    Solution91 sol;

    EXPECT_EQ(sol.numDecodings("06"), 0);
}

}   // namesapce
}   // namespace Leetcode

