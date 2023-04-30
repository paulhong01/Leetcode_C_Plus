#include "solution2611.h"

#include <vector>

namespace Leetcode {

int miceAndCheese(std::vector<int>& reward1, std::vector<int>& reward2, int k) {
    // TC:O(NlogN), SC:O(N)
    std::vector<std::vector<int>> diff_r1_r2;
    for (int i = 0; i < reward1.size(); i++) {
        std::vector<int> cur;
        cur.push_back(reward1[i] - reward2[i]);
        cur.push_back(reward1[i]);
        cur.push_back(reward2[i]);
        diff_r1_r2.push_back(cur);
    }

    std::sort(diff_r1_r2.begin(), diff_r1_r2.end(),[](const std::vector<int>& lhs, const std::vector<int>& rhs) {
        return lhs[0] > rhs[0];
    });

    int cur_count = 0, ret = 0;
    for (const auto& entry: diff_r1_r2) {
        if (cur_count < k) {
            cur_count++;
            ret += entry[1];
        } else {
            ret += entry[2];
        }
    }

    return ret;
}

}   // namespace Leetcode
