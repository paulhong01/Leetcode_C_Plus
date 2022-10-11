#include "solution129.h"

#include "TreeNode.h"

namespace Leetcode {

int Solution129::sumNumbers(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    traversal(root, /*prev_val=*/0);
    return sum_;
}

void Solution129::traversal(TreeNode* cur, int prev_val) {
    if (cur == nullptr) {
        return;
    }
    if (cur->left == nullptr && cur->right == nullptr) {
        sum_ += (prev_val + cur->val);
        return;
    }
    int next_val = (prev_val + cur->val)*10;
    traversal(cur->left, next_val);
    traversal(cur->right, next_val);
}

}   // namespace Leetcode