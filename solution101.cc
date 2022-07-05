#include "solution101.h"

#include "TreeNode.h"

namespace Leetcode {

bool Solution101::isSymmetric(TreeNode* root) {
    // TC:O(N), SC:O(N)
    return checkSymmetic(root->left, root->right);
}

bool Solution101::checkSymmetic(TreeNode* left_node, TreeNode* right_node) {
    if (left_node != nullptr && right_node != nullptr) {
        return (left_node->val == right_node->val) && checkSymmetic(left_node->left, right_node->right) && checkSymmetic(left_node->right, right_node->left);
    }
    return (left_node == nullptr && right_node == nullptr);
}

}   // namespace Leetcode