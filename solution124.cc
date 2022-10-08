#include "solution124.h"

#include <optional>

#include "TreeNode.h"

namespace Leetcode {

int Solution124::maxPathSum(TreeNode* root) {
    traversal(root);
    return ret.value();
}

int Solution124::traversal(TreeNode* cur) {
    // TC:O(N), SC:O(N)
    if (cur == nullptr) {
        return 0;
    }
    
    int left_ret = traversal(cur->left);
    int right_ret = traversal(cur->right);
    if (ret == std::nullopt) {
        ret = std::max(cur->val, cur->val + std::max(left_ret, std::max(right_ret, left_ret + right_ret)));
    } else {
        ret = std::max(*ret, std::max(cur->val, cur->val + std::max(left_ret, std::max(right_ret, left_ret + right_ret))));
    }
    int cur_max = std::max(cur->val, cur->val + std::max(left_ret, right_ret));
    return cur_max;
}
}   // namespace Leetcode