#include "solution2658.h"

#include <vector>

namespace Leetcode {
namespace {

int traversal(int row, int col, std::vector<std::vector<int>>& grid) {
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == 0) {
        return 0;
    }

    int total = grid[row][col];
    grid[row][col] = 0;
    total += traversal(row-1, col, grid);
    total += traversal(row, col-1, grid);
    total += traversal(row+1, col, grid);
    total += traversal(row, col+1, grid);
    return total;
}

}

int findMaxFish(std::vector<std::vector<int>>& grid) {
    // TC:O(N*M), SC:O(1), N = grid.size() and M = grid[0].size()
    int max_fish = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] > 0) {
                max_fish = std::max(max_fish, traversal(i, j, grid));
            }
        }
    }
    return max_fish;
}

}   // namespace Leetcode
