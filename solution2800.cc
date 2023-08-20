#include "solution2800.h"

#include <string>
#include <vector>

namespace Leetcode {
namespace {
std::string merge(std::string a, std::string b) {
    if (a.find(b) != std::string::npos) {
        return a;
    }

    for (int i = std::min(a.size(), b.size()); i >= 0; i--) {
        if (a.substr(a.size()-i) == b.substr(0, i)) {
            return a + b.substr(i);
        }
    }
    return a + b;
}

std::string helper(std::string a, std::string b, std::string c) {
    return merge(merge(a, b), c);
}
}   // namespace

std::string minimumString(std::string a, std::string b, std::string c) {
    // TC:O(N^2), SC:O(1)
    std::vector<std::string> permutations = {
        helper(a, b, c),
        helper(a, c, b),
        helper(b, a, c),
        helper(b, c, a),
        helper(c, a, b),
        helper(c, b, a)
    };

    std::string ret = permutations[0];
    for (int i = 1; i < 6; i++) {
        if (ret.size() == permutations[i].size() && permutations[i] < ret) {
            ret = permutations[i];
        } else if (permutations[i].size() < ret.size()) {
            ret = permutations[i];
        }
    }
    return ret;
}

}   // namespace Leetcode
