// Leetcode 173: Binary Search Tree Iterator
#ifndef LEETCODE_SOLUTION173
#define LEETCODE_SOLUTIOn173

namespace Leetcode {
class BSTIterator {
public:
    BSTIterator(TreeNode* root);
    
    int next();
    
    bool hasNext();
private:
    void traversalToLeftMost(TreeNode* cur);

    stack<TreeNode*> stack;
};
}   // namespace Leetcode

#endif
