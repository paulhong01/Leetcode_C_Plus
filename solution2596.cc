#include "solution2596.h"

#include <vector>

namespace Leetcode {

bool Solution2596::checkValidGrid(std::vector<std::vector<int>>& grid) {
    int dir[8][2] = {{1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};
    if (grid[0][0] != 0) {
        return false;
    }

    int N = grid.size() * grid.size();
    int target = 0, row = 0, col = 0;
    while (target < N) {
        target++;
        bool valid_next_pos = false;
        for (auto d : dir) {
            int next_row = row + d[0];
            int next_col = col + d[1];
            if (next_row >= 0 && next_row < grid.size() && next_col >= 0 && next_col < grid.size() && grid[next_row][next_col] == target) {
                valid_next_pos = true;
                row = next_row;
                col = next_col;
                break;
            }
        }
        if (!valid_next_pos && target != N) {
            return false;
        }
    }
    return true;
}

}   // namespace Leetcode
