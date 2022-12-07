#include "solution140.h"

#include <set>
#include <string>
#include <map>
#include <vector>

namespace Leetcode {
namespace {
vector<std::string> DFS(std::string s, std::map<int, std::vector<std::string>>& seen, std::set<std::string>& wordDict, int start) {
    if (seen.count(start) != 0) {
        return seen[start];
    }
    std::vector<std::string> ret;
    if (start == s.size()) {
        ret.push_back("");
        return ret;
    }

    for (int end = start; end < s.size(); end++) {
        std::string cur_string = s.substr(start, end - start+1);
        if (wordDict.count(cur_string) != 0) {
            std::vector<std::string> future_list = DFS(s, seen, wordDict, end+1);
            for (std::string future_word : future_list) {
                std::string cur_sol = cur_string + std::string((future_word.size() > 0)?" ":"") + future_word;
                ret.push_back(cur_sol);
            }
        }
    }
    seen.insert({start, ret});
    return ret;
}
}   // namespace 

std::vector<std::string> Solution140::wordBreak(std::string s, std::vector<std::string>& wordDict) {
    std::set<std::string> wordDict_map;
    for (std::string word: wordDict) {
        wordDict_map.insert(word);
    }
    std::map<int, vector<std::string>> seen;
    return DFS(s, seen, wordDict_map, 0);
}
}   // namespace Leetcode
