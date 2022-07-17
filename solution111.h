#ifndef LEETCODE_SOLUTION111
#define LEETCODE_SOLUTION111

#include "TreeNode.h"

namespace Leetcode {
class Solution111 {
public:
    int minDepth(TreeNode* root);
private:
    void traversal(TreeNode* cur, int cur_depth, int& cur_min_depth);
};
}   // namespace Leetcode 
#endif