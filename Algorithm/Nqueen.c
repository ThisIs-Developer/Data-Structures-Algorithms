#include <stdio.h>
#define MAX_N 10
short board[MAX_N][MAX_N] = {0};
short isSafe(short row, short col, short n) {
    for (short i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return 0;
        }
    }
    for (short i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return 0;
        }
    }
    for (short i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) {
            return 0;
        }
    }
    return 1;
}
short solveNQueens(short row, short n) {
    if (row == n) {
        return 1;
    }
    for (short col = 0; col < n; col++) {
        if (isSafe(row, col, n)) {
            board[row][col] = 1; // Place the queen

            if (solveNQueens(row + 1, n)) {
                return 1;
            }
            board[row][col] = 0;
        }
    }
    return 0;
}
void printBoard(short n) {
    printf("Solution:\n");
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n; j++) {
            printf("%hd ", board[i][j]);
        }
        printf("\n");
    }
}
int main() {
    short n;
    printf("Enter the value of N: ");
    scanf("%hd", &n);
    if (solveNQueens(0, n)) {
        printBoard(n);
    } else {
        printf("No solution found for N = %hd.\n", n);
    }
    return 0;
}
//complexity : O(N^N) time*queen