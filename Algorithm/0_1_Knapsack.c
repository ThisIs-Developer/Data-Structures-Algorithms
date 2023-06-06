#include <stdio.h>
#define MAX_ITEMS 100
#define MAX_CAPACITY 1000

short max(short a, short b) {
    return (a > b) ? a : b;
}
short knapsack(short values[], short weights[], short n, short capacity) {
    short dp[MAX_ITEMS][MAX_CAPACITY];

    for (short i = 0; i <= n; i++) {
        for (short w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][capacity];
}

int main() {
    short values[MAX_ITEMS];
    short weights[MAX_ITEMS];
    short n, capacity;

    printf("Enter the number of items: ");
    scanf("%hd", &n);

    printf("Enter the values of the items:\n");
    for (short i = 0; i < n; i++) {
        printf("Value of item %hd: ", i + 1);
        scanf("%hd", &values[i]);
    }
    printf("Enter the weights of the items:\n");
    for (short i = 0; i < n; i++) {
        printf("Weight of item %hd: ", i + 1);
        scanf("%hd", &weights[i]);
    }
    printf("Enter the knapsack capacity: ");
    scanf("%hd", &capacity);
    short maxProfit = knapsack(values, weights, n, capacity);
    printf("\nMaximum profit: %hd\n", maxProfit);

    return 0;
}
//complexity : O(N*W)