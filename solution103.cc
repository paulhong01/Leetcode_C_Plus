#include "solution103.h"

#include <vector>
#include <queue>

#include "TreeNode.h"

namespace Leetcode {

std::vector<std::vector<int>> Solution103::zigzagLevelOrder(TreeNode* root) {
    std::vector<std::vector<int>> ret;
    std::queue<TreeNode*> q;
    if (root != nullptr) {
        q.push(root);
    }
    bool from_left = true;
    while (!q.empty()) {
        std::vector<int> level_ret;
        int level_size = q.size();
        for (int i = 0; i < level_size; ++i) {
            TreeNode* cur = q.front();
            q.pop();
            level_ret.push_back(cur->val);
            if (cur->left != nullptr) {
                q.push(cur->left);
            }
            if (cur->right != nullptr) {
                q.push(cur->right);
            }
        }
        if (!from_left) {
            reverse(level_ret.begin(), level_ret.end());
        }
        ret.push_back(level_ret);
        from_left = !from_left;
    }
    return ret;
}

}   // namespace Leetcode