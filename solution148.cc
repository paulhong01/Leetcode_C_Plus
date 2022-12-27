#include "solution148.h"

namespace Leetcode {
namespace {
ListNode* getMid(ListNode* head) {
    ListNode* dummy_head = new ListNode(-1);
    dummy_head->next = head;
    ListNode* prev_slow = dummy_head;
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        prev_slow = prev_slow->next;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast->next != nullptr) {
        slow = slow->next;
        prev_slow = prev_slow->next;
    }
    prev_slow->next = nullptr;
    return slow;
}

ListNode* mergeSort(ListNode* left, ListNode* right) {
    ListNode* dummy_head = new ListNode(-1);
    ListNode* cur = dummy_head;
    while (left != nullptr && right != nullptr) {
        if (left->val < right->val) {
            cur->next = left;
            left = left->next;
        } else {
            cur->next = right;
            right = right->next;
        }
        cur = cur->next;
    }
    cur->next = (left != nullptr)?left:right;
    return dummy_head->next;
}
}   // namespace 

ListNode* sortList(ListNode* head) {
    // TC:O(Nlog(N)), SC:O(log(N))
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    ListNode* mid = getMid(head);
    ListNode* left = sortList(head);
    ListNode* right = sortList(mid);
    return mergeSort(left, right);
}
}
