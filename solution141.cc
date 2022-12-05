#include "solution141.h"

namespace Leetcode {
bool Solution141::hasCycle(ListNode* head) {
    // TC:O(N), SC:O(1)
    if (head == nullptr) {
        return false;
    }
    ListNode* two_steps = head;
    ListNode* one_step = head;
    while (two_steps->next != nullptr && two_steps->next->next != nullptr) {
        two_steps = two_steps->next->next;
        one_step = one_step->next;
        if (two_steps == one_step) {
            return true;
        }
    }
    return false;
}
}   // namespace Leetcode
