// Leetcode 131: Palindrome Partitioning
#ifndef LEETCODE_SOLUTION131
#define LEETCODE_SOLUTION131

#include <vector>
#include <string>

namespace Leetcode {
class Solution131 {
public:
    std::vector<std::vector<std::string>> partition(std::string s);
private:
    void dfs(std::vector<std::vector<std::string>>& ret, std::vector<std::string>& cur_list, int start_pos, const std::string& s);
    bool isPalindrome(const std::string& s);
};
}   // namespace Leetcode
#endif
