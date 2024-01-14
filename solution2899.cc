#include "solution2899.h"

#include <string>
#include <vector>

namespace Leetcode {

std::vector<int> lastVisitedIntegers(std::vector<std::string>& words) {
    std::vector<int> cur_list;
    std::vector<int> ret;
    int consecutive_prev = 0;
    for (const auto& word : words) {
        if (word == "prev") {
            ++consecutive_prev;
            if (consecutive_prev > cur_list.size()) {
                ret.push_back(-1);
            } else {
                ret.push_back(cur_list[cur_list.size()-consecutive_prev]);
            }
        } else {
            consecutive_prev = 0;
            // cout << atoi(word.data()) << endl;
            cur_list.push_back(atoi(word.data()));
        }
    }
    return ret;
}

}   // namespace Leetcode