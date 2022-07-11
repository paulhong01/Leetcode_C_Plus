// Leetcode 105: Construct Binary Tree from Preorder and Inorder Traversal
#ifndef LEETCODE_SOLUTION105
#define LEETCODE_SOLUTION105

#include <vector>
#include <map>

#include "TreeNode.h"

namespace Leetcode {
class Solution105 {
public:
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder);
private:
    TreeNode* buildSubTree(int preorder_start, int inorder_start, int inorder_end, std::map<int, int>& inorder_map, const std::vector<int>& preorder, const std::vector<int>& inorder);
};
}   // namespace Leetcode
#endif
