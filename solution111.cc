#include "solution111.h"

#include <algorithm>

#include "TreeNode.h"

namespace Leetcode {
int Solution111::minDepth(TreeNode* root) {
    // TC:O(N), SC:O(N)
    if (root == nullptr) {
        return 0;
    }
    int min_depth = -1;
    traversal(root, 1, min_depth);
    return min_depth;
}

void Solution111::traversal(TreeNode* cur, int cur_depth, int& cur_min_depth) {
    if (cur->left == nullptr && cur->right == nullptr) {
        cur_min_depth = (cur_min_depth == -1)?cur_depth:std::min(cur_min_depth, cur_depth);
        return;
    }
    
    if (cur->left != nullptr)   traversal(cur->left, cur_depth+1, cur_min_depth);
    if (cur->right != nullptr)  traversal(cur->right, cur_depth+1, cur_min_depth);
}
}   // namespace Leetcode