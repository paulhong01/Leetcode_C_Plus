// Leetcode 108: Convert Sorted Array to Binary Search Tree
#ifndef LEETCODE_SOLUTION108
#define LEETCODE_SOLUTION108

#include <vector>

#include "TreeNode.h"

namespace Leetcode {
class Solution108 {
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums);
private:
    TreeNode* buildSubTree(const std::vector<int>& nums, int start_idx, int end_idx);
};
}   // namespace Leetcode

#endif 