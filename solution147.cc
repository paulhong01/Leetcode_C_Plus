#include "solution147.h"

namespace Leetcode {
ListNode* insertionSortList(ListNode* head) {
    // TC:O(N^2), SC:O(1)
    ListNode* dummy = new ListNode(0);
    ListNode* insert_iter = dummy;
    ListNode* cur = head;
    while (cur != nullptr) {
        ListNode* cur_next = cur->next;
        insert_iter = dummy;
        while (insert_iter->next != nullptr && insert_iter->next->val < cur->val) {
            insert_iter = insert_iter->next;
        }
        cur->next = insert_iter->next;
        insert_iter->next = cur;
        cur = cur_next;
    }
    return dummy->next;
}
}   // namespace Leetcode
