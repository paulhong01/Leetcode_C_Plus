// Leetcode110: Balanced Binary Tree
#ifndef LEETCODE_SOLUTION110
#define LEETCODE_SOLUTION110

#include <utility>

#include "TreeNode.h"

namespace Leetcode {
class Solution110 {
public:
    bool isBalanced(TreeNode* root);
private:
    std::pair<int, bool> getHeight(TreeNode* cur);
};
}   // namespace Leetcode
#endif