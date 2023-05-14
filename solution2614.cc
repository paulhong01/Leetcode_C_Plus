#include "solution2614.h"

#include <vector>

namespace Leetcode {
namespace {
    bool isPrimeNumber(int num) {
        if (num == 1) {
            return false;
        }
        for (int i = 2 ; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        } 
        return true;
    }
}

int Solution2614::diagonalPrime(std::vector<std::vector<int>>& nums) {
    // TC:O(N), SC:O(1)
    int max_prime = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (isPrimeNumber(nums[i][i])) {
            max_prime = std::max(max_prime, nums[i][i]);
        }
        if (isPrimeNumber(nums[i][nums.size() - i - 1])) {
            max_prime = std::max(max_prime, nums[i][nums.size()-i-1]);
        }
    }
    return max_prime;
}

}   // namespace Leetcode
