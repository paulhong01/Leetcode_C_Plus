#include "solution2843.h"

#include <string>

namespace Leetcode {
namespace {

bool isSymmetric(int value) {
    std::string value_str = std::to_string(value);
    if (value_str.size()%2 != 0) {
        return false;
    }

    int idx1 = 0, idx2 = value_str.size()-1;
    int count_front = 0, count_back = 0;
    while (idx1 < idx2) {
        count_front += (value_str[idx1] - '0');
        count_back += (value_str[idx2] - '0');
        idx1++;
        idx2--;
    }
    return (count_front == count_back);
}

}   // namespace

int Solution2843::countSymmetricIntegers(int low, int high) {
    // TC:O(N), SC:O(N)
    int count = 0;
    for (int i = low; i <= high; i++) {
        if (isSymmetric(i)) {
            ++count;
        }
    }
    return count;
}

}   // namespace Leetcode
