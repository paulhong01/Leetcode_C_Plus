#include "solution117.h"

#include <queue>

#include "Node.h"

namespace Leetcode {
Node* Solution117::connect(Node* root) {
    // TC:O(N), SC:O(N)
    std::queue<Node*> q;
    if (root != nullptr) {
        q.push(root);
    }
    
    while (!q.empty()) {
        int cur_size = q.size();
        Node* prev = nullptr;
        for (int i = 0; i < cur_size; i++) {
            Node* cur = q.front();
            cur->next = prev;
            prev = cur;
            if (cur->right != nullptr) {
                q.push(cur->right);
            }
            if (cur->left != nullptr) {
                q.push(cur->left);
            }
            q.pop();
        }
    }
    return root;
}
}   // namespace Leetcode