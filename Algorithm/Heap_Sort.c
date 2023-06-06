#include <stdio.h>
#include <stdlib.h>

void heapify(short arr[], int size, int root) {
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != root) {
        short temp = arr[root];
        arr[root] = arr[largest];
        arr[largest] = temp;
        heapify(arr, size, largest);
    }
}

void heapSort(short arr[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    for (int i = size - 1; i > 0; i--) {
        short temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

int main() {
    int size;
    short *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (short*) malloc(size * sizeof(short));

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%hd", &arr[i]);
    }

    heapSort(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
        printf("%hd ", arr[i]);

    free(arr);

    return 0;
}
//complexity : O(n logn)