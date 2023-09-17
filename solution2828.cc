#include "solution2828.h"

#include <string>
#include <vector>

namespace Leetcode {

bool Solution2828::isAcronym(std::vector<std::string>& words, std::string s) {
    // TC:O(N), SC:O(N), N = words.size()
    std::string first_words;
    for (std::string word : words) {
        first_words += word[0];
    }
    return first_words == s;
}

}   // namespace Leetcode
