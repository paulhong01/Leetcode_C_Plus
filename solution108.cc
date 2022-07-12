#include "solution108.h"

#include <vector>

#include "TreeNode.h"

namespace Leetcode {
TreeNode* Solution108::sortedArrayToBST(std::vector<int>& nums) {
    // TC:O(N), SC:O(N)
    TreeNode* root = buildSubTree(nums, 0, nums.size()-1);
    return root;
}

TreeNode* Solution108::buildSubTree(const std::vector<int>& nums, int start_idx, int end_idx) {
    if (start_idx > end_idx) {
        return nullptr;
    }
    int cur_idx = (start_idx + end_idx)/2;
    TreeNode* cur_root = new TreeNode(nums[cur_idx]);
    cur_root->left = buildSubTree(nums, start_idx, cur_idx-1);
    cur_root->right = buildSubTree(nums, cur_idx+1, end_idx);
    return cur_root;
}
}   // namespace Leetcode