#ifndef LEETCODE_SOLUTION113
#define LEETCODE_SOLUTION113

#include <vector>

#include "TreeNode.h"

namespace Leetcode {
class Solution113 {
public:
    std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum);
private:
    void traversal(TreeNode* cur, int cur_sum, int targetSum, std::vector<std::vector<int>>& ret, std::vector<int>& cur_list);
};
}   // namespace Leetcode
#endif