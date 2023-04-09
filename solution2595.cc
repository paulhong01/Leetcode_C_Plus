#include "solution2595.h"

#include <vector>

namespace Leetcode {

std::vector<int> Solution2595::evenOddBit(int n) {
    // TC:O(1), SC:O(1)
    int even = 0, odd = 0;
    for(int i = 0; i < 32; ++i){
        if(n & (1 << i)){
            if(i%2) odd++;
            else even++;
        }
    }
    return {even, odd};
}

}   // namespace Leetcode
