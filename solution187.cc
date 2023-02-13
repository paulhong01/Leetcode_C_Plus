#include "solution187.h"

#include <string>
#include <vector>

namespace Leetcode {

vector<std::string> findRepeatedDnaSequences(std::string s) {
    // TC:O(N), SC:O(N)
    std::set<std::string> ret;
    if (s.size() < 10) {
        return {};
    }
    std::string cur = s.substr(0, 10);
    std::set<std::string> seen;
    seen.insert(cur);
    for (int i = 10; i < s.size(); i++) {
        cur = cur.substr(1, 9) + s[i];
        if (auto it = seen.find(cur); it != seen.end()) {
            ret.insert(*it);
        }
        seen.insert(cur);
    }

    std::vector<std::string> ret_vec(ret.size());
    std::copy(ret.begin(), ret.end(), ret_vec.begin());
    return ret_vec;
}

}   // namespace Leetcode
