#include "solution139.h"

#include <vector>
#include <string>
#include <set>
#include <iostream>

namespace Leetcode {
bool Solution139::wordBreak(std::string s, std::vector<std::string>& wordDict) {
    // TC:O(N^2), SC:O(N)
    std::set<std::string> wordDict_set;
    for (std::string word: wordDict) {
        wordDict_set.insert(word);
    }
    
    int N = s.size();
    std::vector<bool> dp(N+1, false);
    dp[0] = true;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && wordDict_set.count(s.substr(j, i-j)) != 0) {
                dp[i] = true;
            }
        }
    }
    return dp[N];
}
}   // namespace Leetcode
