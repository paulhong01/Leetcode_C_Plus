#include "solution2904.h"

#include <string>

namespace Leetcode {

std::string shortestBeautifulSubstring(std::string s, int k) {
    // TC:O(N^2), SC:O(N)
    std::string ret = "";
    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        for (int j = i; j < s.size(); j++) {
            if (s[j] == '1') {
                ++count;
            }
            if (count == k) {
                std::string cur_str = s.substr(i, j-i+1);
                if (ret == "") {
                    ret = cur_str;
                } else if (ret.size() > (j-i+1)) {
                    ret = cur_str;
                } else if (ret.size() == cur_str.size()) {
                    ret = std::min(ret, cur_str);
                }
                break;
            }
        }
    }
    return ret;
}

}   // namespace Leetcode