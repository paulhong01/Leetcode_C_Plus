#include "solution145.h"

namespace Leetcode {
vector<int> postorderTraversal(TreeNode* root) {
    // Recursive: TC:O(N), SC:O(N)
    // vector<int> ret;
    // traversal(root, ret);
    // return ret;

    // Iterative: TC:O(N), SC:O(N)
    stack<TreeNode*> s;
    TreeNode* cur = root;
    vector<int> ret;
    while (cur != nullptr || !s.empty()) {
        while (cur != nullptr) {
            ret.push_back(cur->val);
            s.push(cur);
            cur = cur->right;
        }
        cur = s.top();
        s.pop();
        cur = cur->left;
    }

    reverse(ret.begin(), ret.end());
    return ret;
}

void traversal(TreeNode* cur, vector<int>& ret) {
    if (cur == nullptr) {
        return;
    }

    traversal(cur->left, ret);
    traversal(cur->right, ret);
    ret.push_back(cur->val);
}
}
