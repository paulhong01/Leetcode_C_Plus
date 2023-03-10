#include "solution2578.h"

#include <vector>

namespace Leetcode {

int splitNum(int num) {
    // TC:O(1), SC:O(1)
    std::vector<int> n;
    while (num != 0) {
        n.push_back(num%10);
        num /= 10;
    }
    std::sort(n.begin(), n.end());
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n.size(); i++) {
        if (i % 2 == 0) {
            num1 *= 10;
            num1 += n[i];
        } else {
            num2 *= 10;
            num2 += n[i];
        }
    }
    return num1 + num2;
}

}   // namespace Leetcode
