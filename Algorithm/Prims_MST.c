#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 100

int minKey(int key[], int mstSet[], int n) {
	int v;
    int min = INT_MAX, minIndex;

    for (v = 0; v < n; v++) {
        if (mstSet[v] == 0 && key[v] < min) {
            min = key[v];
            minIndex = v;
        }
    }

    return minIndex;
}

void printMST(int parent[], int graph[MAX_SIZE][MAX_SIZE], int n) {
	int i;
    printf("Edge   Weight\n");

    for (i = 1; i < n; i++) {
        printf("%d - %d    %d\n", parent[i], i, graph[i][parent[i]]);
    }
}

void primMST(int graph[MAX_SIZE][MAX_SIZE], int n) {
	int i,count,v;
    int parent[MAX_SIZE];
    int key[MAX_SIZE];
    int mstSet[MAX_SIZE];

    for (i = 0; i < n; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1;

    for (count = 0; count < n - 1; count++) {
        int u = minKey(key, mstSet, n);

        mstSet[u] = 1;

        for (v = 0; v < n; v++) {
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    printMST(parent, graph, n);
}

int main() {
    int graph[MAX_SIZE][MAX_SIZE];
    int n, i, j;

    printf("Enter the number of vertices (n): ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    primMST(graph, n);

    return 0;
}
//complexity : O((V + E) log V)