#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n) {
    // Check row
    for (int i = 0; i < n; i++) {
        if (board[row][i] == 'Q') return false;
    }

    // Check column
    for (int i = 0; i < n; i++) {
        if (board[i][col] == 'Q') return false;
    }

    // Check Left Diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }

    // Check Right Diagonal (Up-Right)
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }

    // Check Right Diagonal (Down-Left)
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
    if (row == n) {
        ans.push_back(board);
        return;
    }

    for (int j = 0; j < n; j++) { 
        if (isSafe(board, row, j, n)) {
            board[row][j] = 'Q';
            nQueens(board, row + 1, n, ans);
            board[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));  // Fix here
    nQueens(board, 0, n, ans);
    return ans;
}

int main() { 
    int n;
    cin >> n;

    vector<vector<string>> ans = solveNQueens(n);

    for (const auto &solution : ans) {
        for (const string &row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
