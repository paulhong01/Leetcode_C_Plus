#include "solution165.h"

#include <string>
#include <vector>

namespace Leetcode {
namespace {
std::vector<int> getVersionPath(const std::string& version_str) {
    std::vector<int> ret;
    int cur = 0;
    for (int i = 0; i < version_str.size(); i++) {
        if (version_str[i] == '.') {
            ret.push_back(cur);
            cur = 0;
            continue;
        }
        cur = cur*10 + (version_str[i] - '0');
    }
    ret.push_back(cur);
    return ret;
}
}   // namespace

int Solution165::compareVersion(std::string version1, std::string version2) {
    // TC:O(N), SC:O(N)
    std::vector<int> version_path1 = getVersionPath(version1);
    std::vector<int> version_path2 = getVersionPath(version2);
    int idx = 0, len = std::min(version_path1.size(), version_path2.size());
    while (idx < len) {
        if (version_path1[idx] < version_path2[idx]) {
            return -1;
        } else if (version_path1[idx] > version_path2[idx]) {
            return 1;
        }
        ++idx;
    }
    for (int i = idx; i < version_path1.size(); i++) {
        if (version_path1[i] != 0) {
            return 1;
        }
    }
    for (int i = idx; i < version_path2.size(); i++) {
        if (version_path2[i] != 0) {
            return -1;
        }
    }
    return 0;
}

}   // namespace Leetcode
