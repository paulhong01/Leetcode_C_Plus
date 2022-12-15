#include "solution146.h"

namespace Leetcode {
LRUCache::LRUCache(int capacity) {
    capacity_ = capacity;
}

int LRUCache::get(int key) {
    if (auto it = cache_.find(key); it != cache_.end()) {
        history_.remove(key);
        history_.push_back(key);
        return it->second;
    }
    return -1;
}

void LRUCache::put(int key, int value) {
    if (auto it = cache_.find(key); it != cache_.end()) {
        history_.remove(key);
        history_.push_back(key);
        it->second = value;
        return;
    }

    if (history_.size() == capacity_) {
        int old_key = history_.front();
        auto old_entry = cache_.find(old_key);
        cache_.erase(old_entry);
        history_.pop_front();
    }
    cache_.emplace(key, value);
    history_.push_back(key);
}
}   // namespace Leetcode
