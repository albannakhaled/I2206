#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify a subtree rooted at 'rootIndex' in the array
void heapify(int arr[], int n, int rootIndex) {
    int largest = rootIndex;     // Initialize largest as root
    int leftChild = 2 * rootIndex + 1;
    int rightChild = 2 * rootIndex + 2;

    // If the left child is larger than the root
    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;

    // If the right child is larger than the largest so far
    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;

    // If the largest is not the root, swap them and heapify the affected subtree
    if (largest != rootIndex) {
        swap(&arr[rootIndex], &arr[largest]);
        heapify(arr, n, largest);
    }
}

// Main function to perform Heap Sort
void heapSort(int arr[], int n) {
    // Build the max heap (rearrange the array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from the heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move the current root (largest element) to the end
        swap(&arr[0], &arr[i]);

        // Heapify the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print the elements of the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test the Heap Sort algorithm
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    heapSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
// The time complexity of Heap Sort is O(n log n) in all cases, where n is the number of elements in the array.