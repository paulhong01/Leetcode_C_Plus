#include "solution2825.h"

#include <string>

namespace Leetcode {

bool Solution2825::canMakeSubsequence(std::string str1, std::string str2) {
    // TC:O(N), SC:O(1)
    int i = 0;
    for(auto c: str2){
        char t = (c == 'a')?'z': c - 1;
        while(i < str1.size() && (str1[i] != c && str1[i] != t) ) i++;
        if(i >= str1.size()) return false;
        i++; 
    }
    return true;
}

}   // namespace Leetcode
