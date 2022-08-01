#include "solution112.h"

#include "TreeNode.h"

namespace Leetcode {
bool hasPathSum(TreeNode* root, int targetSum) {
    // TC:O(N), SC:O(N)
    if (root == nullptr) {
        return false;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return targetSum == root->val;
    }
    return hasPathSum(root->left, targetSum-root->val)||hasPathSum(root->right, targetSum-root->val);
}
}   // namespace Leetcode