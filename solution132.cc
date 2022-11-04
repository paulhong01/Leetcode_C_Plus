#include "solution132.h"

#include <string>
#include <vector>

namespace Leetcode {
int Solution132::minCut(std::string s) {
    // TC:O(N^2), SC:O(N^2)
    std::vector<int> min_cut(s.size());
    std::vector<std::vector<bool>> isPal(s.size(), std::vector<bool>(s.size()));
    for (int i = 0; i < s.size(); i++) {
        int cur_min_cut = i;
        for (int j = 0; j <= i; j++) {
            if (s[i] == s[j] && (j+1 > i-1 || isPal[i-1][j+1])) {
                isPal[i][j] = true;
                cur_min_cut = (j == 0)?0:std::min(cur_min_cut, min_cut[j-1]+1);
            } 
        }
        min_cut[i] = cur_min_cut;
    }
    return min_cut[s.size()-1];
}
}
