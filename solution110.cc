#include "solution110.h"

#include <algorithm>
#include <utility>
#include <cstdlib>

#include "TreeNode.h"

namespace Leetcode {
bool Solution110::isBalanced(TreeNode* root) {
    // TC:O(N), SC:O(N)
    if (root == nullptr) {
        return true;
    }
    auto [left_height, is_left_balance] = getHeight(root->left);
    auto [right_height, is_right_balance] = getHeight(root->right);
    return std::abs(left_height-right_height)<=1&&is_left_balance&&is_right_balance;
}

std::pair<int, bool> Solution110::getHeight(TreeNode* cur) {
    if (cur == nullptr) {
        return {0, true};
    }
    auto [left_height, is_left_balance] = getHeight(cur->left);
    auto [right_height, is_right_balance] = getHeight(cur->right);
    return {std::max(left_height, right_height)+1, std::abs(left_height-right_height)<=1&&is_left_balance&&is_right_balance};
}
}   // namespace Leetcode