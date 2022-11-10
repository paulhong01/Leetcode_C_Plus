#include "solution134.h"

#include <vector>

namespace Leetcode {
int Solution134::canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
    // TC:O(N), SC:O(1)
    if (gas.size() == 0) {
        return -1;
    }
    int tank = gas[0], start = 0, total_net = (gas[0]-cost[0]), N = gas.size();
    for (int i = 1; i < N; i++) {
        tank -= cost[i-1];
        total_net += (gas[i] - cost[i]);
        if (tank < 0) {
            tank = 0;
            start = i;
        }
        tank += gas[i];
    }
    return (total_net < 0)?-1:start;
}
}
