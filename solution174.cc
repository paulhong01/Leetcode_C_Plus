#include "solution174.h"

#include <vector>

namespace cloud_router {

int Solution174::calculateMinimumHP(std::vector<std::vector<int>>& dungeon) {
    // TC:O(MN), SC:O(MN)
    int M = dungeon.size();
    int N = dungeon[0].size();
    // hp[i][j] represents the min hp needed at position (i, j)
    // Add dummy row and column at bottom and right side
    std::vector<std::vector<int> > hp(M + 1, std::vector<int>(N + 1, INT_MAX));
    hp[M][N - 1] = 1;
    hp[M - 1][N] = 1;
    for (int i = M - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--) {
            int need = std::min(hp[i + 1][j], hp[i][j + 1]) - dungeon[i][j];
            hp[i][j] = need <= 0 ? 1 : need;
        }
    }
    return hp[0][0];
}

}   // namespace cloud_router
