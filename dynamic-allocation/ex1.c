#include<stdio.h>
#include<string.h>
void main()
{
    int *p ;
    int size ;
    printf("Enter size of array : ");
    scanf("%d",&size);
    p  = (int*)malloc(size*sizeof(int));
    for(int i = 0 ; i< size ; i++) {
        printf("\nGive value num %d : ", i);
        scanf("%d", p + i);
    }
    for(int i = 0 ; i< size ; i++) {
        printf("\nValue num %d : %d", i,*(p+i));
    }
    free(p);
}