#include "solution2816.h"

#include "ListNode.h"


namespace Leetcode {
namespace {

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* cur = head;
    while (cur != nullptr) {
        ListNode* orig_next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = orig_next;
    }
    return prev;
}

}   // namespace


ListNode* Solution2816::doubleIt(ListNode* head) {
    // TC:O(N), SC:O(1)
    ListNode* reverse_head = reverseList(head);

    int carry = 0;
    ListNode* cur = reverse_head;
    while (true) {
        int new_val = (cur->val * 2 + carry);
        cur->val = new_val % 10;
        carry = new_val / 10;

        if (cur->next == nullptr) {
            if (carry != 0) {
                cur->next = new ListNode(carry);
            }
            break;
        }
        cur = cur->next;
    }
    return reverseList(reverse_head);
}

}   // namespace Leetcode
