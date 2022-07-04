#ifndef LEETCODE_SOLUTION99
#define LEETCODE_SOLUTION99

#include "TreeNode.h"

namespace Leetcode {
class Solution99 {
 public:
    void recoverTree(TreeNode* root);
 private:
    void traversal(TreeNode* cur);

    TreeNode* first_replace = nullptr;
    TreeNode* second_replace = nullptr;
    TreeNode* prev = nullptr;
};
}   // namespace Leetcode

#endif