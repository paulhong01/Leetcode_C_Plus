// Leetcode 129: Sum Root to Leaf Numbers
#ifndef LEETCODE_SOLUTION129
#define LEETCODE_SOLUTION129

#include "TreeNode.h"

namespace Leetcode {

class Solution129 {
public:
    int sumNumbers(TreeNode* root);
private:
    void traversal(TreeNode* cur, int prev_val);
    int sum_ = 0;
};

}   // namespace Leetcode

#endif