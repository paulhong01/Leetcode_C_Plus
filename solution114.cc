#include "solution114.h"

#include "TreeNode.h"

namespace Leetcode {
void Solution114::flatten(TreeNode* root) {
    helper(root);
}

TreeNode* Solution114::helper(TreeNode* cur) {
    if (cur == nullptr) {
        return nullptr;
    }
    TreeNode* organized_left = helper(cur->left);
    TreeNode* original_right = cur->right;
    cur->right = organized_left;
    TreeNode* it = cur;
    while (it->right != nullptr) {
        it = it->right;
    }
    it->right = original_right;
    cur->left = nullptr;
    if (cur->right != nullptr) {
        helper(cur->right);
    }
    return cur;
}
}   // namespace Leetcode

