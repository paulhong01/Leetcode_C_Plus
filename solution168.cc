#include "solution168.h"

#include <string>

namespace Leetcode {

std::string Solution168::convertToTitle(int columnNumber) {
    // TC:O(1), SC:(1)
    std::string ret = "";
    while (columnNumber != 0) {
        char cur_char = 65 + (columnNumber-1)%26;
        ret = cur_char + ret;
        columnNumber = (columnNumber - 1)/26;
    }
    return ret;
}

}   // namespace Leetcode
