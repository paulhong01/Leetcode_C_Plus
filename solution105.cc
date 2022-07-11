#include "solution105.h"

#include <vector>
#include <map>

#include "TreeNode.h"

namespace Leetcode {
TreeNode* Solution105::buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
    std::map<int, int> inorder_map;
    for (int i = 0; i < inorder.size(); ++i) {
        inorder_map[inorder[i]] = i;
    }
    
    TreeNode* root = buildSubTree(/*preorder_start=*/0, /*inorder_start=*/0, /*inorder_end=*/inorder.size()-1, inorder_map, preorder, inorder);
    return root;
}

TreeNode* Solution105::buildSubTree(int preorder_start, int inorder_start, int inorder_end, std::map<int, int>& inorder_map, const std::vector<int>& preorder, const std::vector<int>& inorder) {
    if (preorder_start >= preorder.size() || inorder_start > inorder_end) {
        return nullptr;
    }
    
    int val = preorder[preorder_start];
    TreeNode* cur_root = new TreeNode(val);
    int val_idx = inorder_map[val];
    
    cur_root->left = buildSubTree(preorder_start+1, inorder_start, val_idx-1, inorder_map, preorder, inorder);
    cur_root->right = buildSubTree(preorder_start+val_idx-inorder_start+1, val_idx+1, inorder_end, inorder_map, preorder, inorder);
    return cur_root;
}
}   // namespace Leetcode