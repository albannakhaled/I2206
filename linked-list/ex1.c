/*
Ex 1 –

    a. Create a linked list where each cell is a structure that containsthe name (20 char), the number
    (10 characters) and a pointer to the next cell.
    b. Write a pointer function (*creation) that allows to fill the list.
    c. Write a function (display) that allows to display the list
    d. Write a program (by using these 2 functions) that allow to create and display the list

*/
#include<stdio.h>
#include<stdlib.h>

struct node{
    char name[20];
    char number[10];
    struct node *next;
};
void main(){
    struct node *head;
    struct node *conductor ;
    head = (struct node*)malloc(sizeof(struct node));
    head -> next = NULL;
    head -> name = "name";
    head -> number = "123";
    head = conductor;
}