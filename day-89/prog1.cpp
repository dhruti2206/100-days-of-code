//sudoku solver using backtracking
#include <iostream>
using namespace std;
#define N 3
bool isSafe(int board[N][N], int row, int col, int num) {
    // Check row
    for (int x = 0; x < N; x++)
        if (board[row][x] == num) return false;
    // Check column
    for (int x = 0; x < N; x++)
        if (board[x][col] == num) return false;
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + startRow][j + startCol] == num) return false;
    return true;
}
// Recursive backtracking solver
bool solveSudoku(int board[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (board[row][col] == 0) { 
                for (int num = 1; num <= 9; num++) {
                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num; // Place number
                        if (solveSudoku(board)) return true; // Recurse
                        board[row][col] = 0; // Backtrack
                    }
                }
                return false; //No valid num
            }
        }
    }
    return true; 
}
//Sudoku board
void printBoard(int board[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++)
            cout << board[row][col] << " ";
        cout << endl;
    }
}
int main() {
    int board[N][N] = {
        {5,3,0},
        {6,0,0},
        {0,9,8}
    };
    if (solveSudoku(board))
        printBoard(board);
    else
        cout << "No solution exists" << endl;
    return 0;
}

