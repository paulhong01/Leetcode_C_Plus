#include "solution138.h"

namespace Leetcode {
Node* Solution138::copyRandomList(Node* head) {
    // TCO:(N), SC:O(N)
    map<Node*, Node*> origin_copy;
    Node* copy_dummy = new Node(-1);
    Node* cur = head;
    Node* copy_cur = copy_dummy;
    while (cur != nullptr) {
        if (origin_copy.count(cur) == 0) {
            origin_copy[cur] = new Node(cur->val);
        }
        copy_cur->next = origin_copy[cur];
        copy_cur = copy_cur->next;
        
        if (cur->random != nullptr && origin_copy.count(cur->random) == 0) {
            origin_copy[cur->random] = new Node(cur->random->val);
        }
        copy_cur->random = (cur->random == nullptr)?nullptr:(origin_copy[cur->random]);
        cur = cur->next;
    }
    return copy_dummy->next;
}
}   // namespace Leetcode
