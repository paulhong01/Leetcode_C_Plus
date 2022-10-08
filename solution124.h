// Leetcode 124: Binary Tree Maximum Path Sum
#ifndef LEETCODE_SOLUTION124
#define LEETCODE_SOLUTION124

#include <optional>

#include "TreeNode.h"

namespace Leetcode {

class Solution124 {
public:
    std::optional<int> ret;
    int maxPathSum(TreeNode* root);

private: 
    void traversal(TreeNode* cur);
};
}   // namespace Leetcode

#endif