#include <vector>
#include <stack>

#include "solution94.h"
#include "TreeNode.h"

namespace Leetcode {
std::vector<int> inorderTraversal(TreeNode* root) {
    std::vector<int> ret;
    std::stack<TreeNode*> s;
    TreeNode* cur = root;
    while (cur != nullptr || !s.empty()) {
        while (cur != nullptr) {
            s.push(cur);
            cur = cur->left;
        }
        cur = s.top();
        s.pop();
        ret.push_back(cur->val);
        cur = cur->right;
    }
    return ret;
}
}   // namespace Leetcode
