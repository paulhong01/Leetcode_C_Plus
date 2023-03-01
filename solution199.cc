#include "solution199.h"

#include <vector>
#include <queue>

#include "TreeNode.h"

namespace Leetcode {

std::vector<int> Solution199::rightSideView(TreeNode* root) {
    // TC:O(N), SC:O(N)
    std::vector<int> ret;
    std::queue<TreeNode*> q;
    if (root != nullptr) {
        q.push(root);
    }

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* cur = q.front();
            q.pop();
            if (i == 0) {
                ret.push_back(cur->val);
            }
            if (cur->right != nullptr) {
                q.push(cur->right);
            }
            if (cur->left != nullptr) {
                q.push(cur->left);
            }
        }
    }
    return ret;
}

}   // namespace Leetcode
