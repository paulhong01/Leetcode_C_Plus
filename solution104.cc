#include "solution104.h"

#include <queue>

#include "TreeNode.h"

namespace Leetcode {

int Solution104::maxDepth(TreeNode* root) {
    // TC:O(N), SC:O(N)
    int level = 0;
    queue<TreeNode*> q;
    if (root != nullptr) {
        q.push(root);
    }
    
    while (!q.empty()) {
        int cur_size = q.size();
        ++level;
        for (int i = 0; i < cur_size; ++i) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur->left != nullptr) {
                q.push(cur->left);
            }
            if (cur->right != nullptr) {
                q.push(cur->right);
            }
        }
    }
    return level;
}

}   // namespace Leetcode