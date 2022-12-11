#include "solution143.h"

namespace Leetcode {
namespace {
ListNode* ReverseList(ListNode* head) {
    ListNode* new_nextNode = nullptr;
    ListNode* cur = head;
    while (cur != nullptr) {
        ListNode* org_nextNode = cur->next;
        cur->next = new_nextNode;
        new_nextNode = cur;
        cur = org_nextNode;
    }
    return new_nextNode;
}

void displayNode(ListNode* head) {
    ListNode* cur = head;
    while (cur != nullptr) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}
}   // namespace 

void Solution143::reorderList(ListNode* head) {
    // TC:O(N), SC:O(1)
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* p1 = dummy;
    ListNode* p2 = dummy;
    while (p2->next != nullptr && p2->next->next != nullptr) {
        p1 = p1->next;
        p2 = p2->next->next;
    }

    // Reverse the latter part
    p1->next = ReverseList(p1->next);
    displayNode(head);
    
    // Insert node
    ListNode* cur = head;
    ListNode* inserted_node = p1->next;
    p1->next = nullptr;
    while (cur != nullptr && inserted_node != nullptr && cur != inserted_node) {
        ListNode* cur_next = cur->next;
        ListNode* inserted_node_next = inserted_node->next;

        cur->next = inserted_node;
        if (cur_next != nullptr) {
            inserted_node->next = cur_next;
        }
        cur = cur_next;
        inserted_node = inserted_node_next;
    }
}
}
