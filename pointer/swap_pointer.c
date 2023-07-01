//Swap Two Numbers Using Pointers

#include <stdio.h>

void swap(int* ptr1, int* ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("Before swap:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    swap(&num1, &num2);

    printf("After swap:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
