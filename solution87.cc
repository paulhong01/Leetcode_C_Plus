// Leetcode 87: Scramble String
#include "solution87.h"
#include <string.h>


namespace Leetcode {

bool Solution87::isScramble(std::string s1, std::string s2) {
    if (s1 == s2) {
        return true;
    }

    int len = s1.size();
    int charArray[26] = {0};
    for (int i = 0; i < len; ++i) {
        ++charArray[s1[i]-'a'];
        --charArray[s2[i]-'a'];
    }
    for (int i = 0; i < 26; ++i) {
        if (charArray[i] != 0) {
            return false;
        }
    }

    for (int i = 1; i < len; i++) {
        if (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i))) {
            return true;
        }
        if (isScramble(s1.substr(0, i), s2.substr(len-i)) && isScramble(s1.substr(i), s2.substr(0, len-i))) {
            return true;
        }
    }

    return false;
}

} // namespace Leetcode