#include "solution99.h"

#include "TreeNode.h"

namespace Leetcode {
void Solution99::recoverTree(TreeNode* root) {
    traversal(root);
    
    if (first_replace != nullptr && second_replace != nullptr) {
        int temp = first_replace->val;
        first_replace->val = second_replace->val;
        second_replace->val = temp;
    }
}

void Solution99::traversal(TreeNode* cur) {
    if (cur == nullptr) {
        return;
    }
    
    traversal(cur->left);
    
    if (prev != nullptr && first_replace == nullptr && prev->val > cur->val) {
        first_replace = prev;
    }
    if (prev != nullptr && prev->val > cur->val) {
        second_replace = cur;
    }
    prev = cur;
    
    traversal(cur->right);
}
}   // namespace Leetcode