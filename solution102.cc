#include "solution102.h"

#include <vector>
#include <queue>

#include "TreeNode.h"

namespace Leetcode {

std::vector<std::vector<int>> Solution102::levelOrder(TreeNode* root) {
    // TC:O(N), SC:O(N)
    std::vector<std::vector<int>> ret;
    if (root == nullptr) {
        return ret;
    }
    
    std::queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int cur_size = q.size();
        std::vector<int> cur_ret;
        for (int i = 0; i < cur_size; ++i) {
            TreeNode* cur = q.front();
            cur_ret.push_back(cur->val);
            q.pop();
            if (cur->left != nullptr) {
                q.push(cur->left);
            }
            if (cur->right != nullptr) {
                q.push(cur->right);
            }
        }
        if (!cur_ret.empty()) {
            ret.push_back(cur_ret);
        }
    }
    return ret;
}

}   // namespace Leetcode