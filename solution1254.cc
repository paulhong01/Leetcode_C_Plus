#include "solution1254.h"

#include <vector>

namespace Leetcode {
namespace {
bool dfs(std::vector<std::vector<int>>& grid, int row, int col) {
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size()) {
        return false;
    }

    if (grid[row][col] == 1) {
        return true;
    }
    if (grid[row][col] == -1) {
        return false;
    }
    grid[row][col] = 1;
    bool is_closed_island = dfs(grid, row+1, col)&&dfs(grid, row-1, col)&&dfs(grid, row, col+1)&&dfs(grid,row, col-1);
    if (!is_closed_island) {
        // Marks this position as -1 if it is not a closed island
        grid[row][col] = -1;
    }
    return is_closed_island;
}
}   // namespace

int Solution1254::closedIsland(std::vector<std::vector<int>>& grid) {
    // TC:O(N*M), SC:O(M*N), where M = grid.size(), N = grid[0].size()
    int ret = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 0) {
            ret += (dfs(grid, i, j)?1:0);
            }
        }
    }
    return ret;
}
}   // namespace Leetcode
