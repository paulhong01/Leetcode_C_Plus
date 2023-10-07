#include "solution2840.h"

#include <string>
#include <vector>

namespace Leetcode {

bool checkStrings(std::string s1, std::string s2) {
    // TC:O(N), SC:O(1)
    std::vector<int> count(26);
    for (int i = 0; i < s1.size(); i += 2) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    for (int i = 1; i < s1.size(); i += 2) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

}   // namespace Leetcode
