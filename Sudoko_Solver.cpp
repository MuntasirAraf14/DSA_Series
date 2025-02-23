//Time Complexity: O(9^(n*n))
//Space Complexity: O(n*n)

#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char dig) {
    // Vertical check
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == dig) {
            return false;
        }
    }
    // Horizontal check
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == dig) {
            return false;
        }
    }
    // 3x3 Grid check
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == dig) {
                return false;
            }
        }
    }
    return true;
}

bool helper(vector<vector<char>>& board, int row, int col) {
    if (row == 9) {
        return true;  // Sudoku solved
    }
    int nextRow = row, nextCol = col + 1;
    if (nextCol == 9) {
        nextRow = row + 1;
        nextCol = 0;
    }

    if (board[row][col] != '.') {
        return helper(board, nextRow, nextCol);
    }

    // Try placing digits
    for (char dig = '1'; dig <= '9'; dig++) {
        if (isSafe(board, row, col, dig)) {
            board[row][col] = dig;
            if (helper(board, nextRow, nextCol)) {
                return true;
            }
            board[row][col] = '.';  // Backtrack
        }
    }
    return false;
}

bool solveSudoku(vector<vector<char>>& board) {
    return helper(board, 0, 0);
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if (solveSudoku(board)) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Solution doesn't exist";
    }

    return 0;
}
