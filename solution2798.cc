#include "solution2798.h"

#include <vector>

namespace Leetcode {

int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
    // TC:O(N), SC:O(1)
    int count = 0;
    for (int hour : hours) {
        if (hour >= target) {
            ++count;
        }
    }
    return count;
}

}
