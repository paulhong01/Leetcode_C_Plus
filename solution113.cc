#include "solution113.h"

#include <vector>

#include "TreeNode.h"

namespace Leetcode {
std::vector<std::vector<int>> Solution113::pathSum(TreeNode* root, int targetSum) {
    // TC:O(N), SC:O(N)
    std::vector<std::vector<int>> ret;
    std::vector<int> cur_list;
    if (root != nullptr)
        traversal(root, /*cur_sum=*/0, targetSum, ret, cur_list);
    return ret;
}

void Solution113::traversal(TreeNode* cur, int cur_sum, int targetSum, std::vector<std::vector<int>>& ret, std::vector<int>& cur_list) {
    cur_sum += cur->val;
    cur_list.push_back(cur->val);
    if (cur->left == nullptr && cur->right == nullptr) {
        if (cur_sum == targetSum) {
            ret.push_back(std::vector<int>(cur_list));
        }
    }
    
    if (cur->left != nullptr) {
        traversal(cur->left, cur_sum, targetSum, ret, cur_list);
    }
    if (cur->right != nullptr) {
        traversal(cur->right, cur_sum, targetSum, ret, cur_list);
    }
    cur_sum -= cur->val;
    cur_list.pop_back();
}
}   // namespace Leetcode