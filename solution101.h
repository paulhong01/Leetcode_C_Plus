#ifndef LEETCODE_SOLUTION101
#define LEETCODE_SOLUTION101

#include "TreeNode.h"

namespace Leetcode {
class Solution101 {
public:
    bool isSymmetric(TreeNode* root);
private:
    bool checkSymmetic(TreeNode* left_node, TreeNode* right_node);
};
}   // namespace Leetocde
#endif