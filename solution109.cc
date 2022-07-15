#include "solution109.h"

#include "TreeNode.h"
#include "ListNode.h"

namespace Leetcode {
TreeNode* sortedListToBST(ListNode* head) {
    // TC:O(N), SC:O(N)
    if (head == nullptr) {
        return nullptr;
    }
    ListNode* prev = nullptr;
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    TreeNode* cur_root = new TreeNode(slow->val);
    if (prev != nullptr)    prev->next = nullptr;
    if (slow != head)   cur_root->left = sortedListToBST(head);
    if (slow->next != nullptr)  cur_root->right = sortedListToBST(slow->next);
    
    return cur_root;
}
}   // namespace Leetcode