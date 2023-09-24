#include "solution2844.h"

#include <string>
#include <vector>

namespace Leetcode {
namespace {
int OperationsToReachEnd(const std::string& num, const std::vector<char>& ends) {
    int count = 0, ends_idx = 1;
    for (int i = num.size()-1; i >= 0; --i) {
        if (ends_idx < 0) {
            break;
        }

        if (num[i] == ends[ends_idx]) {
            ends_idx--;
        } else {
            count++;
        }
    }
    if (ends_idx >= 0 && ends[0] != '0') {
        return num.size();
    }
    return count;
}
}   // namespace 

int minimumOperations(std::string num) {
    // TC:O(1), SC:O(1)
    int min_operations = num.size();
    std::vector<std::vector<char>> types =  {{'0','0'}, {'2','5'}, {'5','0'}, {'7','5'}};
    for (const auto& end :types) {
        int operations = OperationsToReachEnd(num, end);
        min_operations = std::min(min_operations, operations);
    } 
    return min_operations;
}

}   // namespace Leetcode
