#include "solution171.h"

#include <string>

namespace Leetcode {

int Solution171::titleToNumber(std::string columnTitle) {
    // TC:O(N), SC:O(1), N = columnTitle.size()
    int col_num = 0;
    for (int i = 0; i < columnTitle.size(); i++) {
        col_num = col_num*26 + (columnTitle[i] - 'A') + 1;
    }
    return col_num;
}

}   // namespace Leetcode
