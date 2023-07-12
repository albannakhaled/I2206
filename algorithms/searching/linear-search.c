#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // return the index if target is found
        }
    }
    return -1; // return -1 if target is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12 , 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;

    int index = linearSearch(arr, n, target);

    if (index == -1) {
        printf("Element not found . \n");
    } else {
        printf("Element found at index %d\n .", index);
    }

    return 0;
}
