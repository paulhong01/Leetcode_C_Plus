#include "solution91.h"

#include <string>
#include <vector>

namespace Leetcode {

int Solution91::numDecodings(std::string s) {
    std::vector<int> dp(s.length()+1, 0);
    dp[s.size()] = 1;
    for (int i = s.size()-1; i >= 0; i--) {
        if (s[i] == '0') {
            dp[i] = 0;
        } else {
            dp[i] += dp[i+1];
            if (i < s.size() - 1 && (s[i] == '1' || (s[i] == '2' && s[i+1] < '7'))) {
                dp[i] += dp[i+2];
            }
        }
    }
    return s.size()==0?0:dp[0];
}

}   // namespace Leetcode