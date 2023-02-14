#include "solution189.h"

#include <vector>

namespace Leetcode {
namespace {

void reverse(vector<int>& nums, int s, int e) {
    int start = s, end = e;
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

}   // namespace

void Solution189::rotate(std::vector<int>& nums, int k) {
    // TC:O(N), SC:O(1)
    int N = nums.size();
    k = k % N;
    reverse(nums, 0, N-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, N-1);
}

}   // namespace Leetcode
