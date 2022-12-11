#include "solution144.h"

namespace Leetcode {
namespace {
void Traversal(TreeNode* cur, vector<int>& ret) {
    if (cur == nullptr) {
        return;
    }

    ret.push_back(cur->val);
    Traversal(cur->left, ret);
    Traversal(cur->right, ret);
}
}   // namespace


vector<int> preorderTraversal(TreeNode* root) {
    // Recursive: TC:(N), SC:O(N)
    // vector<int> ret;
    // Traversal(root, ret);
    // return ret;

    // Iterative: TC:O(N), SC:O(N)
    std::stack<TreeNode*> s;
    vector<int> ret;
            TreeNode* cur = root;
    while (cur != nullptr || !s.empty()) {
        while (cur != nullptr) {
            ret.push_back(cur->val);
            s.push(cur);
            cur = cur->left;
        }

        cur = s.top();
        s.pop();
        cur = cur->right;
    }
    return ret;
}
}   // namespace Leetcode
