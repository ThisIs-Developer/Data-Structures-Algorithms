#include <stdio.h>
#include <stdlib.h>
#define MAX_EDGES 100
#define MAX_VERTICES 100
typedef struct {
    short s;
    short d;
    short w;
} Edge;
typedef struct {
    short p;
    short r;
} Subset;
short find(Subset s[], short i) {
    if (s[i].p != i)
        s[i].p = find(s, s[i].p);
    return s[i].p;
}
void unite(Subset s[], short x, short y) {
    short xr = find(s, x);
    short yr = find(s, y);
    if (s[xr].r < s[yr].r)
        s[xr].p = yr;
    else if (s[xr].r > s[yr].r)
        s[yr].p = xr;
    else {
        s[yr].p = xr;
        s[xr].r++;
    }
}
int cmpEdges(const void* a, const void* b) {
    Edge* e1 = (Edge*)a;
    Edge* e2 = (Edge*)b;
    return e1->w - e2->w;
}
void kruskal(Edge e[], short n, short v) {
    Edge mst[MAX_EDGES];
    Subset subsets[MAX_VERTICES];
    qsort(e, n, sizeof(Edge), cmpEdges);
    for (short i = 0; i < v; i++) {
        subsets[i].p = i;
        subsets[i].r = 0;
    }
    short mstSize = 0;
    short eIdx = 0;
    while (mstSize < v - 1 && eIdx < n) {
        Edge ne = e[eIdx++];

        short x = find(subsets, ne.s);
        short y = find(subsets, ne.d);

        if (x != y) {
            mst[mstSize++] = ne;
            unite(subsets, x, y);
        }
    }
    printf("Minimum Spanning Tree:\n");
    for (short i = 0; i < mstSize; i++) {
        printf("(%hd, %hd) - %hd\n", mst[i].s, mst[i].d, mst[i].w);
    }
}
int main() {
    short n, v;
    Edge e[MAX_EDGES];
    printf("Enter the number of vertices: ");
    scanf("%hd", &v);
    printf("Enter the number of edges: ");
    scanf("%hd", &n);
    printf("Enter the details of each edge (source, destination, weight):\n");
    for (short i = 0; i < n; i++) {
        printf("Edge %hd: ", i + 1);
        scanf("%hd %hd %hd", &e[i].s, &e[i].d, &e[i].w);
    }
    kruskal(e, n, v);
    return 0;
}
//complexity : O(E log E) edge