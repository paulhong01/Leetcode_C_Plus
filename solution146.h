// Leetcode 146: LRU Cache
#ifndef LEETCODE_SOLUTION146
#define LEETCODE_SOLUTION146

namespace Leetcode {
class LRUCache {
public:
    LRUCache(int capacity);
    
    int get(int key);
    
    void put(int key, int value);
private:
    std::list<int> history_;
    std::map<int, int> cache_;
    int capacity_;
};    
}   // namespace Leetcode

#endif
