#include "solution2605.h"

#include <vector>
#include <unordered_set>
#include <optional>

namespace Leetcode {

int minNumber(std::vector<int>& nums1, std::vector<int>& nums2) {
    // TC:O(N+M), SC:O(N), where N = nums1.size() and M = nums2.size()
    std::unordered_set<int> nums1_elements;
    int one_smallest_element = 9;
    for (const auto num : nums1) {
        nums1_elements.insert(num);
        one_smallest_element = std::min(one_smallest_element, num);
    }

    std::optional<int> smallest_same_element;
    int two_smallest_element = 9;
    for (const auto num : nums2) {
        if (nums1_elements.count(num) != 0) {
            smallest_same_element = smallest_same_element.has_value()?std::min(*smallest_same_element, num):num;
        }
        two_smallest_element = std::min(two_smallest_element, num);
    }

    return smallest_same_element.has_value()?*smallest_same_element:std::min(one_smallest_element, two_smallest_element)*10+std::max(one_smallest_element, two_smallest_element);
}

}   // namespace Leetcode
