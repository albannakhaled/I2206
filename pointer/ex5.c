#include <stdio.h>
#include <string.h>


// whiteout using for loop
typedef struct {
    char* str;
    int length;
} String;

void initializeString(String* s, char* str) {
    s->str = str;
    s->length = strlen(str);
}

int main() {
    char str[] = "Hello, World!";
    String s;

    initializeString(&s, str);

    printf("Length of the string: %d\n", s.length);

    return 0;
}

/*
#include<stdio.h>
#include<string.h>
void main()
{
    char string[10]= {"qweradsf"};
    char *p;
    for(p = string ; *p ; p++){
      ;
    }
    printf("%ld",p-string);
}
*/