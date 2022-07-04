#include "solution100.h"

#include "TreeNode.h"

namespace Leetcode {
bool Solution100::isSameTree(TreeNode* p, TreeNode* q) {
    if (p != nullptr && q != nullptr) {
        return (p->val == q->val)&&isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
    }
    
    return (p==nullptr && q==nullptr);
}
}   // namespace Leetcode