#include "solution2900.h"

#include <string>
#include <vector>

namespace Leetcode {

std::vector<std::string> getWordsInLongestSubsequence(int n, std::vector<std::string>& words, std::vector<int>& groups) {
    // TC:O(N), SC:O(N)
    std::vector<std::string> ans;
    int last = groups[0];
    ans.push_back(words[0]);
    for (int i = 1; i < groups.size(); ++i) {
        if (last != groups[i]) {
            last = groups[i];
            ans.push_back(words[i]);
        }
    }
    return ans;
}

}   // namespace Leetcode
