// Exercise: Finding the Maximum Number in an Array

// Write a program that finds the maximum number in an array using pointers. Your program should perform the following steps:

// Declare an integer array with a fixed size and initialize it with some values.
// Declare a pointer variable of type int and initialize it to point to the first element of the array.
// Iterate through the array using pointer arithmetic to compare each element with the current maximum number.
// If an element is greater than the current maximum number, update the maximum number.
// After the iteration, print the maximum number.

#include <stdio.h>

int main() {
  int max = -1;
  int x;
  int arr[x];

  printf("Enter size of array: ");
  scanf("%d", &x);

  for (int i = 0; i < x; i++) {
    printf("Enter %dth value: ", i + 1);
    scanf("%d", &arr[i]);
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("The maximum value is %d\n", max);

  return 0;
}
/*
#include <stdio.h>

int main()
{
    int numbers[] = {10, 7, 15, 3, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int *ptr = numbers; // Pointer to the first element

    int max = *ptr; // Initialize max with the first element

    for (int i = 1; i < size; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i); // Update the maximum
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}

*/
// Using pointers, write a program that display the maximum value of an array of n integers.

#include<stdio.h>

// bidoun pointer

#include <stdio.h>

int main() {
    int arr[] = {5, 6, 8, 2, 4, 9, 3, 5, 8};
    int length = sizeof(arr) / sizeof(int);
    // printf("%d",length); 9
    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max);
    return 0;
}

// using pointer
/*
int main() {
    int arr[] = {5, 6, 8, 2, 4, 9, 3, 5, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int max = *ptr;
    
    for (int i = 1; i < length; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }
    
    printf("%d", max);
    return 0;
}

*/