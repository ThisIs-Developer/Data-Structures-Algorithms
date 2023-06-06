#include <stdio.h>
#include <stdlib.h>

void merge(short a[], short t[], int ls, int m, int re) {
    int le = m - 1;
    int tp = ls;
    int num = re - ls + 1;

    while (ls <= le && m <= re) {
        if (a[ls] <= a[m])
            t[tp++] = a[ls++];
        else
            t[tp++] = a[m++];
    }

    while (ls <= le)
        t[tp++] = a[ls++];

    while (m <= re)
        t[tp++] = a[m++];

    for (int i = 0; i < num; i++, re--)
        a[re] = t[re];
}

void mergeSortHelper(short a[], short t[], int l, int r) {
    if (l >= r)
        return;

    int m = (l + r) / 2;

    mergeSortHelper(a, t, l, m);
    mergeSortHelper(a, t, m + 1, r);

    merge(a, t, l, m + 1, r);
}

void mergeSort(short a[], int s) {
    short* t = (short*)malloc(s * sizeof(short));
    mergeSortHelper(a, t, 0, s - 1);
    free(t);
}

int main() {
    int s;
    short* a;

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    a = (short*)malloc(s * sizeof(short));

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++) {
        printf("Element %d: ", i + 1);
        scanf("%hd", &a[i]);
    }

    mergeSort(a, s);

    printf("\nSorted array: ");
    for (int i = 0; i < s; i++)
        printf("%hd ", a[i]);

    free(a);

    return 0;
}
//complexity : O(nLogn)