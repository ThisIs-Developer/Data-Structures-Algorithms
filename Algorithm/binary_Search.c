#include <stdio.h>
#include <stdlib.h>

int binarySearch(short arr[], short target, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;  
}

int main() {
    int size;
    short *arr;
    short target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (short*) malloc(size * sizeof(short));

    printf("Enter %d elements in ascending order:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%hd", &arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%hd", &target);

    int index = binarySearch(arr, target, 0, size - 1);

    if (index != -1)
        printf("\nElement %hd found at index %d.\n", target, index);
    else
        printf("\nElement %hd not found.\n", target);

    free(arr);

    return 0;
}
//complexity : O(log n)