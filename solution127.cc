#include "solution127.h"

#include <vector>
#include <set>
#include <queue>

namespace Leetcode {
int Solution127::ladderLength(std::string beginWord, std::string endWord, std::vector<std::string>& wordList) {
    std::set<std::string> s(wordList.begin(), wordList.end());
    std::set<std::string> visited;
    std::queue<std::string> q;
    q.push(beginWord);
    int level = 0;
    while (!q.empty()) {
        ++level;
        int cur_size = q.size();
        for (int i = 0; i < cur_size; i++) {
            std::string cur = q.front();
            if (cur == endWord) {
                return level;
            }
            q.pop();
            visited.insert(cur);
            for (int i = 0; i < cur.size(); i++) {
                for (char c = 'a'; c <= 'z'; c++) {
                    std::string next_string = (i == 0 ? "":cur.substr(0, i)) + c + cur.substr(i+1);
                    if (visited.count(next_string) == 0 && s.count(next_string) != 0) {
                        q.push(next_string);
                    }
                }
            }
        }      
    }
    return 0;
}
}   // namespace Leetcode