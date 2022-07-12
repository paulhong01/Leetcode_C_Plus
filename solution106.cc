#include "solution106.h"

#include <vector>
#include <map>

#include "TreeNode.h"

namespace Leetcode {
TreeNode* Solution106::buildTree(std::vector<int>& inorder, std::vector<int>& postorder) {
    // TC:O(N), SC:O(N)
    std::map<int, int> inorder_map;
    for (int i = 0; i < inorder.size(); ++i) {
        inorder_map[inorder[i]] = i;
    }
    TreeNode* root = buildSubTree(/*postorder_idx=*/postorder.size()-1, /*inorder_start=*/0, /*inorder_end=*/inorder.size()-1, inorder_map, inorder, postorder);
    return root;
}

TreeNode* Solution106::buildSubTree(int post_idx, int inorder_start, int inorder_end, std::map<int, int>& inorder_map, std::vector<int>& inorder, std::vector<int>& postorder) {
    if (inorder_start > inorder_end || post_idx < 0) {
        return nullptr;
    }
    
    int cur_val = postorder[post_idx];
    TreeNode* cur_root = new TreeNode(cur_val);
    int inorder_idx = inorder_map[cur_val];
    
    cur_root->right = buildSubTree(post_idx-1, inorder_idx+1, inorder_end, inorder_map, inorder, postorder);
    cur_root->left = buildSubTree(post_idx-inorder_end+inorder_idx-1, inorder_start, inorder_idx-1, inorder_map, inorder, postorder);
    return cur_root;
}

}   // namespace Leetcode