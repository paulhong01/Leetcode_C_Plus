#include "solution97.h"

#include <string>
#include <vector>

namespace Leetcode {
bool Solution97::isInterleave(std::string s1, std::string s2, std::string s3) {
    // TC:O(M*N), SC:O(M*N), M = s1.length(), N = s2.length()
    if (s1.length() + s2.length() != s3.length()) {
        return false;
    }
    
    std::vector<std::vector<bool>> dp(s1.length()+1, std::vector<bool>(s2.length()+1, false));
    for (int i = 0; i <= s1.length(); i++) {
        for (int j = 0; j <= s2.length(); j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = true;
            } else if (i == 0) {
                dp[i][j] = (s3[i+j-1] == s2[j-1] && dp[i][j-1]);
            } else if (j == 0) {
                dp[i][j] = (s3[i+j-1] == s1[i-1] && dp[i-1][j]);
            } else {
                dp[i][j] = (s3[i+j-1] == s2[j-1] && dp[i][j-1]) || (s3[i+j-1] == s1[i-1] && dp[i-1][j]);
            }
        }
    }
    return dp[s1.length()][s2.length()];
}
}   // namespace Leetcode