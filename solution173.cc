#include "solution173.h"

namespace Leetcode {

BSTIterator::BSTIterator(TreeNode* root) {
    traversalToLeftMost(root);
}

int BSTIterator::next() {
    TreeNode* ret_node = stack.top();
    stack.pop();
    int ret = ret_node->val;
    traversalToLeftMost(ret_node->right);
    return ret;
}

bool BSTIterator::hasNext() {
    return !stack.empty();
}

void BSTIterator::traversalToLeftMost(TreeNode* cur) {
    while (cur != nullptr) {
        stack.push(cur);
        cur = cur->left;
    }
}

}   // namespace Leetcode
