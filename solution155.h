// Leetcode 155: Min Stack

namespace Leetcode {
// Supports push, pop, top, and retrieving the minimum element in constant time.
class MinStack {
public:
    MinStack() = default;
    
    // Pushes the element `val` onto the stack.
    void push(int val);
    
    // Removes the element on the top of the stack.
    void pop();
    
    // Gets the top element of the stack.
    int top();
    
    // Retrieves the minimum element in the stack.
    int getMin();

private:
struct Node {
    int value;
    Node* next;
    int min_value;
    Node(int val, Node* next_node, int min_val) {
        value = val;
        next = next_node;
        min_value = min_val;
    }
};
Node* head = nullptr;
};

}   // namespace Leetcode
