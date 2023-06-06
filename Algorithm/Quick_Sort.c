#include <stdio.h>
#include <stdlib.h>

void swap(short* a, short* b) {
    short temp = *a;
    *a = *b;
    *b = temp;
}

int partition(short arr[], int low, int high) {
    short pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);

    return i + 1;
}

void quickSort(short arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int size;
    short* arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (short*)malloc(size * sizeof(short));

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%hd", &arr[i]);
    }

    quickSort(arr, 0, size - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
        printf("%hd ", arr[i]);

    free(arr);

    return 0;
}
//complexity :  O(logn)