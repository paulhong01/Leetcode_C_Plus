#ifndef LEETCODE_SOLUTION114
#define LEETCODE_SOLUTION114

#include "TreeNode.h"

namespace Leetcode {
class Solution114 {
public:
    void flatten(TreeNode* root);
private:
    TreeNode* helper(TreeNode* cur);
};
}   // namespace Leetcode
#endif