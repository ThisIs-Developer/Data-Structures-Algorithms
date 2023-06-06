#include <stdio.h>
#include <stdlib.h>
struct Item {
    int value;
    int weight;
};
int compare(const void *a, const void *b) {
    double ratioA = ((struct Item *)a)->value / (double)((struct Item *)a)->weight;
    double ratioB = ((struct Item *)b)->value / (double)((struct Item *)b)->weight;
    if (ratioA < ratioB) {
        return 1;
    } else if (ratioA > ratioB) {
        return -1;
    } else {
        return 0;
    }
}
double fractionalKnapsack(struct Item items[], int n, int capacity) {
	int i;
    qsort(items, n, sizeof(struct Item), compare);

    int currentWeight = 0;
    double totalValue = 0.0;

    for (i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            int remainingWeight = capacity - currentWeight;
            totalValue += items[i].value * ((double)remainingWeight / items[i].weight);
            break;
        }
    }

    return totalValue;
}
int main() {
    int n,i;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct Item items[n];
    for (i = 0; i < n; i++) {
        printf("Enter the profit and weight of item %d: ", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
    }
    int capacity;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    double maxValue = fractionalKnapsack(items, n, capacity);

    printf("The maximum value that can be obtained is: %.2lf\n", maxValue);

    return 0;
}
//complexity : O(NlogN)