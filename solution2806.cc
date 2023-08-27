#include "solution2806.h"

namespace Leetcode {

int Solution2806::accountBalanceAfterPurchase(int purchaseAmount) {
    // TC:O(1), SC:O(1)
    if (purchaseAmount%10 == 0) {
        return 100 - purchaseAmount;
    }
    bool rounded_up = (purchaseAmount%10) >= 5;
    if (rounded_up) {
        return 100 - ((purchaseAmount/10)+1)*10;
    }
    return 100 - ((purchaseAmount/10))*10;
}

}   // namespace Leetcode
