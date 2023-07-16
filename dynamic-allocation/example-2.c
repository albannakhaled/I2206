#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    float* arr = (float*)malloc(size * sizeof(float));

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d floating-point numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    // Calculate the average of the entered numbers
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float average = sum / size;

    printf("Average: %.2f\n", average);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
