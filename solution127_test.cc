#include "solution127.h"

#include <string>
#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution127Test, BasicTest) {
    Solution127 sol;
    std::vector<std::string> wordList = {"hot","dot","dog","lot","log","cog"};

    EXPECT_EQ(sol.ladderLength("hit", "cog", wordList), 5);
}

TEST(Solution127Test, NoPathShouldReturn0) {
    Solution127 sol;
    std::vector<std::string> wordList = {"hot","dot","dog","lot","log"};

    EXPECT_EQ(sol.ladderLength("hit", "cog", wordList), 0);
}

}   // namespace
}   // namespace Leetcode