#include <stdio.h>
#include <limits.h>
#define MAX_SIZE 10
void printSequence(short sequence[MAX_SIZE][MAX_SIZE], short i, short j) {
    if (i == j) {
        printf("A%hd", i);
    } else {
        printf("(");
        printSequence(sequence, i, sequence[i][j]);
        printSequence(sequence, sequence[i][j] + 1, j);
        printf(")");
    }
}
void matrixChainMultiplication(short dimensions[], short n) {
    short dp[MAX_SIZE][MAX_SIZE] = {0};
    short sequence[MAX_SIZE][MAX_SIZE] = {0};

    for (short length = 2; length < n; length++) {
        for (short i = 1; i < n - length + 1; i++) {
            short j = i + length - 1;
            dp[i][j] = SHRT_MAX;

            for (short k = i; k < j; k++) {
                short cost = dp[i][k] + dp[k + 1][j] + dimensions[i - 1] * dimensions[k] * dimensions[j];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                    sequence[i][j] = k;
                }
            }
        }
    }
    printf("Minimum number of multiplications: %hd\n", dp[1][n - 1]);
    printf("Optimal sequence of multiplications: ");
    printSequence(sequence, 1, n - 1);
    printf("\n");
}
int main() {
    short dimensions[MAX_SIZE];
    short n;
    printf("Enter the number of matrices: ");
    scanf("%hd", &n);
    printf("Enter the dimensions of matrices:\n");
    for (short i = 0; i <= n; i++) {
        scanf("%hd", &dimensions[i]);
    }
    matrixChainMultiplication(dimensions, n + 1);
    return 0;
}
//complexity : O(n3)