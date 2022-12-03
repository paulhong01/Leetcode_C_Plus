#include "solution139.h"

#include <vector>
#include <string>
#include <iostream>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace Leetcode {
namespace {

TEST(Solution139Test, BasicTest) {
    std::string words[2] = {"leet", "code"};
    std::vector<std::string> words_dict(std::begin(words), std::end(words));
    Solution139 sol;
    EXPECT_TRUE(sol.wordBreak("leetcode", words_dict));
}

}   // namespace
}   // namespace Leetcode
