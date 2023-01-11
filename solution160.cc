#include "solution160.h"

namespace Leetcode {

ListNode* Solution160::getIntersectionNode(ListNode *headA, ListNode *headB) {
    // TC:O(N), SC:O(1)
    ListNode* curA = headA;
    ListNode* curB = headB;
    bool testedA = false;
    bool testedB = false;
    while (curA!= nullptr && curB != nullptr) {
        if (curA == curB) {
            return curA;
        }
        curA = curA->next;
        curB = curB->next;
        if (!testedA && curA == nullptr) {
            curA = headB;
            testedA = true;
        }
        if (!testedB && curB == nullptr) {
            curB = headA;
            testedB = true;
        }
    }
    return nullptr;
}

}   // namespace Leetcode
