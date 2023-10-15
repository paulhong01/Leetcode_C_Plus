#include "solution2850.h"

#include <algorithm>
#include <cstdlib>
#include <vector>

namespace Leetcode {

int minimumMoves(std::vector<std::vector<int>>& grid) {
    // TC:O(N^2), SC:O(1)
    int t = 0;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (grid[i][j] == 0)
                t++;
    if (t == 0)
        return 0;
    
    int ans = INT_MAX;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (grid[i][j] == 0)
            {
                for (int ni = 0; ni < 3; ++ni)
                {
                    for (int nj = 0; nj < 3; ++nj)
                    {
                        int d = std::abs(ni - i) + std::abs(nj - j);
                        if (grid[ni][nj] > 1)
                        {
                            grid[ni][nj]--;
                            grid[i][j]++;
                            ans = std::min(ans, d + minimumMoves(grid));
                            grid[ni][nj]++;
                            grid[i][j]--;
                        }
                    }
                }
            }
        }
    }
    return ans;
}

}   // namespace Leetcode
