#include "solution200.h"

#include <vector>

namespace Leetcode {
namespace {

 void traversal(std::vector<std::vector<char>>& grid, int row, int col) {
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] != '1') {
        return;
    }

    grid[row][col] = 'V';
    traversal(grid, row+1, col);
    traversal(grid, row-1, col);
    traversal(grid, row, col+1);
    traversal(grid, row, col-1);
}

}   // namespace

int Solution200::numIslands(std::vector<std::vector<char>>& grid) {
    // TC:O(NM), SC:O(NM), N = grid.size(), M = grid[0].size()
    int ret = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == '1') {
                ret++;
                traversal(grid, i, j);
            }
        }
    }
    return ret;
}

}   // namespace Leetcode
