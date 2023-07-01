#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
    int number;
    char name[50];
    float mathGrade;
    float chemistryGrade;
};

void main()
{
    struct Student s[5];
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter student %d info: \n", i+1);
        puts("enter number :");
        scanf("%d",&s[i].number);
        puts("enter name :");
        scanf("%s",s->name);
        puts("enter math grade:");
        scanf("%f",&s[i].mathGrade);
        puts("enter chemistry grade :");
        scanf("%f",&s[i].chemistryGrade);
        printf("\n---------------------------------\n");
    }
    printf("=====================================/n=====================================");
    for(int i = 0 ; i < 5 ; i++){
        printf("student %d: \n",i+1);
        printf("name  %s:\n",s[i].name);
        printf("number %d:\n",s[i].number);
        printf("math %.f:\n",s[i].mathGrade);
        printf("chemistry %.f:\n",s[i].chemistryGrade);
        printf("\n---------------------------------\n");

    }
}