#include "solution2901.h"

#include <vector>

namespace Leetcode {
namespace {

bool check(std::vector<std::string>& words, std::vector<int>& groups, int i, int j) {
    if (groups[i] == groups[j] || words[i].size() != words[j].size()) {
        return false;
    }
    int diff = 0;
    for (int w_idx = 0; w_idx < words[i].size(); w_idx++) {
        if (words[i][w_idx] != words[j][w_idx]) {
            diff++;
        }
    }
    return diff == 1;
}

void solve(int n, std::vector<std::string>& words, std::vector<int>& groups, std::vector<std::string>& ret) {
    std::vector<int> len(1001, 1), next(1001, -1);
    int startidx = -1, maxLen = 0;
    for (int i = n-1; i >= 0; i--) {
        for (int j = i+1; j < n; j++) {
            if (len[i] < len[j]+1 && check(words, groups, i, j)) {
                len[i] = len[j] + 1;
                next[i] = j;
            }
        }
        if (maxLen < len[i]) {
            maxLen = len[i];
            startidx = i;
        }
    }

    while (startidx != -1) {
        ret.push_back(words[startidx]);
        startidx = next[startidx];
    }
}

}   // namespace

std::vector<std::string> getWordsInLongestSubsequence(int n, std::vector<std::string>& words, std::vector<int>& groups) {
    std::vector<std::string> res;
    solve(n, words, groups, res);
    return res;
}

}   // namespace Leetcode
