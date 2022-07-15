#include "solution107.h"

#include <vector>
#include <queue>

#include "TreeNode.h"

namespace Leetcode {
std::vector<std::vector<int>> Solution107::levelOrderBottom(TreeNode* root) {
    // TC:O(N), SC:O(N)
    std::vector<std::vector<int>> ret;
    std::queue<TreeNode*> q;
    if (root != nullptr) {
        q.push(root);
    }
    
    while (!q.empty()) {
        int cur_size = q.size();
        std::vector<int> cur_ret;
        for (int i = 0; i < cur_size; ++i) {
            TreeNode* cur = q.front();
            q.pop();
            cur_ret.push_back(cur->val);
            if (cur->left != nullptr) {
                q.push(cur->left);
            }
            if (cur->right != nullptr) {
                q.push(cur->right);
            }
        }
        ret.push_back(cur_ret);
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
}   // namespace Leetcode