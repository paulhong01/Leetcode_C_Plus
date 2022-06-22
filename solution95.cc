#include "solution95.h"

#include <vector>

#include "TreeNode.h"

namespace Leetcode {
namespace {
std::vector<TreeNode*> helper(int start, int end) {
    std::vector<TreeNode*> ret;
    if (end < start) {
        ret.push_back(nullptr);
        return ret;
    }
    
    for (int i = start; i <= end; ++i) {
        std::vector<TreeNode*> left_children = helper(start, i - 1);
        std::vector<TreeNode*> right_children = helper(i+1, end);
        for (auto left_child : left_children) {
            for (auto right_child: right_children) {
                ret.push_back(new TreeNode(i, left_child, right_child));
            }
        }
    }
    return ret;
}
} // namespace

std::vector<TreeNode*> generates(int n) {
    return helper(1, n);
}

}   // namespace Leetcode