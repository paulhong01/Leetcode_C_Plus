#include "solution2591.h"

namespace Leetcode {
int Solution2591::distMoney(int money, int children) {
    // TC:O(1), SC:O(1)
    int ans = 0;
    if(money < children) return -1;
    if(money > children * 8) return children - 1;
    
    while(money > 0 && money - 8 >= children - 1){
        ans++; 
        money -= 8; 
        children--;
    }
    if(money == 4 && children == 1) ans--;
    return ans;
}

}   // namespace Leetcode
