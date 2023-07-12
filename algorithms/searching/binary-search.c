#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // return the index if target is found
        } else if (arr[mid] < target) {
            low = mid + 1; // continue searching in the right half
        } else {
            high = mid - 1; // continue searching in the left half
        }
    }

    return -1; // return -1 if target is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int target = 12;

    int index = binarySearch(arr, 0, n - 1, target);

    if (index == -1) {
        printf("Element not found  .\n");
    } else {
        printf("Element found at index %d.\n", index);
    }

    return 0;
}
