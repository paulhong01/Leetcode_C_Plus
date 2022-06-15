#include "solution92.h"
#include "ListNode.h"

namespace Leeetcode {

ListNode* Solution92::reverseBetween(ListNode* head, int left, int right) {
    // TC:O(N), SC:O(1)
    ListNode* dummy_head = new ListNode(-1);
    dummy_head->next = head;
    ListNode* head_before_reverse = dummy_head;
    ListNode* prev = head;
    ListNode* cur = head->next;
    int idx = 1;
    while (idx < left) {
        head_before_reverse = head_before_reverse->next;
        prev = prev->next;
        cur = cur->next;
        ++idx;
    }
    ListNode* first_node_of_reverse = prev;
    
    while (idx < right) {
        ListNode* origin_next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = origin_next;
        ++idx;
    }
    
    head_before_reverse->next = prev;
    first_node_of_reverse->next = cur;
    return dummy_head->next;
}

}   // namespace Leetcode