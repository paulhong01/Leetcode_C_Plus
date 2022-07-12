// Leetcode 106: Construct Binary Tree from Inorder and Postorder Traversal
#ifndef LEETCODE_SOLUTION106
#define LEETCODE_SOLUTION106

#include <vector>
#include <map>

#include "TreeNode.h"

namespace Leetcode {
class Solution106 {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
private:
    TreeNode* buildSubTree(int post_idx, int inorder_start, int inorder_end, std::map<int, int>& inorder_map, std::vector<int>& inorder, std::vector<int>& postorder);
};

}   // namespace Leetcode
#endif