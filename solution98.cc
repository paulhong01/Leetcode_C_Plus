// Leetcode 98: Validate Binary Search Tree
#include "solution98.h"

#include <stack>
#include <optional>

#include "TreeNode.h"

namespace Leetcode {
bool Solution98::isValidBST(TreeNode* root) {
    // TC:O(N), SC:O(1)
    std::stack<TreeNode*> s;
    TreeNode* cur = root;
    std::optional<int> prev_val = std::nullopt;
    while (cur != nullptr || !s.empty()) {
        while (cur != nullptr) {
            s.push(cur);
            cur = cur->left;
        }
        
        cur = s.top();
        s.pop();
        if (prev_val != std::nullopt && prev_val >= cur->val) {
            return false;
        }
        prev_val = cur->val;
        
        cur = cur->right;
    }
    return true;
}
}   // namespace Leetcode