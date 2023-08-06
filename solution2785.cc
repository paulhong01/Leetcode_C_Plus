#include "solution2785.h"

#include <string>
#include <vector>

namespace Leetcode {
namespace {

bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    } else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }
    return false;
}

}   // namespace

std::string sortVowels(std::string s) {
    // TC:O(NlogN), SC:O(N)
    std::vector<char> vowels;
    std::vector<char> pos;
    for (int i = 0; i < s.size(); i++) {
        if (isVowel(s[i])) {
            vowels.push_back(s[i]);
            pos.push_back(i);
        }
    }
    std::sort(vowels.begin(), vowels.end());
    for (int i = 0; i < pos.size(); i++) {
        s[pos[i]] = vowels[i];
    }
    return s;
}

}   // namespace Leetcode
