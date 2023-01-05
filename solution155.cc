#include "solution155.h"

namespace Leetcode {
void MinStack::push(int val) {
    Node* orig_head = head;
    int cur_min = (orig_head == nullptr)?val:min(val, orig_head->min_value);
    head = new Node(val, orig_head, cur_min);
}

void MinStack::pop() {
    head = head->next;
}

int MinStack::top() {
    return head->value;
}

int MinStack::getMin() {
    return head->min_value;
}

}   // namespace Leetcode 
