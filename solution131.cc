#include "solution131.h"

#include <vector>
#include <string>

namespace Leetcode {
std::vector<std::vector<std::string>> Solution131::partition(std::string s) {
    // TC:O(N*2^N), SC:O(N)
    std::vector<std::vector<std::string>> ret;
    std::vector<std::string> cur_list;
    dfs(ret, cur_list, 0, s);
    return ret;
}

void Solution131::dfs(std::vector<std::vector<std::string>>& ret, std::vector<std::string>& cur_list, int start_pos, const std::string& s) {
    if (start_pos == s.size()) {
        ret.push_back(std::vector<std::string>(cur_list));
        return;
    }
    
    std::string cur = "";
    for (int i = start_pos; i < s.size(); i++) {
        cur += s[i];
        if (isPalindrome(cur)) {
            cur_list.push_back(cur);
            dfs(ret, cur_list, i+1, s);
            cur_list.pop_back();
        }
    }
}

bool Solution131::isPalindrome(const std::string& s) {
    int front = 0, end = s.size()-1;
    while (front <= end) {
        if (s[front] != s[end]) {
            return false;
        }
        ++front;
        --end;
    }
    return true;
}
}   // namespace Leetcode