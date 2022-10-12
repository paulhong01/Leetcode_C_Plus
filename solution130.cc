#include "solution130.h"

#include <vector>

namespace Leetcode {
void Solution130::solve(std::vector<std::vector<char>>& board) {
    // TC:O(N), SC:O(N)
    int N = board.size(), M = board[0].size();
    for (int i = 0; i < N; i++) {
        if (board[i][0] == 'O') {
            traversal(board, i, 0);
        }
        if (board[i][M-1] == 'O') {
            traversal(board, i, M-1);
        }
    }
    
    for (int i = 0; i < M; i++) {
        if (board[0][i] == 'O') {
            traversal(board, 0, i);
        }
        if (board[N-1][i] == 'O') {
            traversal(board, N-1, i);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 'C') {
                board[i][j] = 'O';
            } else {
                board[i][j] = 'X';
            }
        }
    }
}

void Solution130::traversal(vector<vector<char>>& board, int row, int col) {
    if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size()) {
        return;
    }
    if (board[row][col] != 'O') {
        return;
    }

    vector<int> dir = {0, 1, 0, -1, 0};
    board[row][col] = 'C';
    for (int i = 1; i < dir.size(); i++) {
        traversal(board, row+dir[i-1], col+dir[i]);
    }
}


}   // namespace Leetcode