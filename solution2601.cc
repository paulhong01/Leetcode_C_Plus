#include "solution2601.h"

#include <vector>

namespace Leetcode {
namespace {
std::vector<int> GetPrimeNum() {
    std::vector<int> prime_num;
    prime_num.push_back(2);
    for (int i = 3; i < 1000; i++) {
        bool is_prime = true;
        for (int prime : prime_num) {
            if (i % prime == 0) {
                is_prime = false;
            }
        }
        if (is_prime) {
            prime_num.push_back(i);
        }
    }
    return prime_num;
}
}   // namespace 

bool Solution2601::primeSubOperation(std::vector<int>& nums) {
    // TC:O(N), SC:O(1)
    std::vector<int> prime_num = GetPrimeNum();
    int last = 0;
    for (int num : nums) {
        int cur_min = num;
        for (int prime : prime_num) {
            if (num - prime <= last) {
                break;
            }
            cur_min = num - prime;
        }
        if (cur_min <= last) {
            return false;
        }
        last = cur_min;
    }
    return true;
}

}   // namespace Leetcode
