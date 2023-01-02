#include "solution151.h"

namespace Leetcode {
namespace {
std::vector<std::string> getWords(std::string s) {
    std::vector<std::string> ret;
    std::string cur;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (!cur.empty()) {
                ret.push_back(cur);
            }
            cur = "";
        } else {
            cur += s[i];
        }
    }
    if (!cur.empty()) {
        ret.push_back(cur);
    }
    return ret;
}
}   // namespace Leetcode

 string reverseWords(string s) {
    // TC:O(N), SC:O(N)
    vector<std::string> words = getWords(s);
    std::string ret;
    for (int i = words.size()-1; i >= 0; i--) {
        ret += words[i];
        if (i != 0) {
            ret += " ";
        }
    }
    return ret;
}

}   // namespace Leetcode
