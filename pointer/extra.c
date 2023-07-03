/*
create function the change the value of a variable in another function by using pointer 
*/

#include<stdio.h>
void change(int *p);
void main()
{
    int x = 5;
    printf("x = %d\n",x);
    change(&x);
    printf("x = %d\n",x);
}
void change(int *p)
{
    *p = 10;
}