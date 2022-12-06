#include "solution142.h"

namespace Leetcode {
ListNode* Solution142::detectCycle(ListNode* head) {
    // TC:O(N), SC:O(1)
    if (head == nullptr) {
        return nullptr;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}
}   // namespace Leetcode
