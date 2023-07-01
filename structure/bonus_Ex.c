#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
};

void readInfo(struct Book *book, int n) {
    printf("Fill all the book info:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: "); scanf("%s", book[i].title);
        printf("Author: "); scanf("%s", book[i].author);
    }
}

void printInfo(struct Book *book, int n) {
    printf("--------------------------------------\n\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("======================\n");
    }
}

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book b[n];
    readInfo(b, n);
    printInfo(b, n);
    return 0;
}