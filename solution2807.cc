#include "solution2807.h"

#include "ListNode.h"

#include <algorithm>

namespace Leetcode {
namespace {

int GetGcd(int val1, int val2) {
    for (int i = std::min(val1, val2); i >= 0; i--) {
        if (val1 % i == 0 && val2 % i == 0) {
            return i;
        }
    }
    return 1;
}

}   // namespace 


ListNode* Solution2807::insertGreatestCommonDivisors(ListNode* head) {
    // TC:O(N), SC:O(1)
    ListNode* cur = head;
    while (cur != nullptr && cur->next != nullptr) {
        ListNode* origin_next = cur->next;
        cur->next = new ListNode(GetGcd(cur->val, origin_next->val));
        cur->next->next = origin_next;
        cur = origin_next;
    }
    return head;
}

}   // namespace Leetcode
