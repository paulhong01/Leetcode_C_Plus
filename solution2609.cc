#include "solution2609.h"

#include <string>

namespace Leetcode {

int Solution2609::findTheLongestBalancedSubstring(std::string s) {
    int count0 = 0, count1 = 0, ret = 0;
    for (const auto c : s) {
        if (c == '0') {
            count0 = (count1 > 0)?1:count0+1;
            count1 = 0;
        } else {
            count1++;
        }
        ret = std::max(ret, 2*std::min(count0, count1));
    }
    return ret;
}

}   // namesapce Leetcode
