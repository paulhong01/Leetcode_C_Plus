#include "solution133.h"

namespace Leetcode {
Node* Solution133::cloneGraph(Node* node) {
    // TC:O(N), SC:O(N)
    queue<Node*> q;
    map<int, Node*> clone;
    if (node != nullptr) {
        q.push(node);
        clone[node->val] = new Node(node->val);
    }
    
    while (!q.empty()) {
        Node* cur = q.front();
        vector<Node*> clone_neighbors;
        for (Node* neighbor: cur->neighbors) {
            if (clone.count(neighbor->val) == 0) {
                q.push(neighbor);
                clone[neighbor->val] = new Node(neighbor->val);
            }
            clone_neighbors.push_back(clone[neighbor->val]);
        }
        clone[cur->val]->neighbors = vector<Node*>(clone_neighbors);
        q.pop();
    }
    return node==nullptr?nullptr:clone[node->val];
}
}   // namespace Leetcode
