#include <stdio.h>
#include <stdlib.h>

int linearSearch(short arr[], int size, short target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;  // Target found at index i
    }
    return -1;  // Target not found
}

int main() {
    int size;
    short *arr;
    short target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (short*) malloc(size * sizeof(short));

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%hd", &arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%hd", &target);

    int index = linearSearch(arr, size, target);

    if (index != -1)
        printf("\nElement %hd found at index %d.\n", target, index);
    else
        printf("\nElement %hd not found.\n", target);

    free(arr);

    return 0;
}
//complexity : O(n)