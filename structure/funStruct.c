#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct Book
{
    char title[50];
    char author[50];
    int id;
    int quantity;
    int price;
};

int addBook(struct Book book[], int n, char title[], char author[], int id, int quantity, int price)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(book[i].title, title) == 0 && strcmp(book[i].author, author) == 0)
        {
            return 0;
        }
    }
    if (i < n)
    {
        book[i].title = title;
        book[i].author = author;
        book[i].id = id;
        book[i].quantity = quantity;
        book[i].price = price;
        return 1;
    }
    return 0;
}
int displayBook(struct Book book[], int n, int id)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (book[i].id == id)
        {
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("ID: %d\n", book[i].id);
            printf("Quantity: %d\n", book[i].quantity);
            printf("Price: %d\n", book[i].price);
        }
    }
}
int displayAllBooks(struct Book book[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("ID: %d\n", book[i].id);
        printf("Quantity: %d\n", book[i].quantity);
        printf("Price: %d\n", book[i].price);
    }
}
int displayBooksByAuthor(struct Book book[], int n, char author[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(book[i].author, author) == 0)
        {
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("ID: %d\n", book[i].id);
            printf("Quantity: %d\n", book[i].quantity);
            printf("Price: %d\n", book[i].price);
        }
    }
}
int displayBooksByTitle(struct Book book[], int n, char title[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(book[i].title, title) == 0)
        {
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("ID: %d\n", book[i].id);
            printf("Quantity: %d\n", book[i].quantity);
            printf("Price: %d\n", book[i].price);
        }
    }
}
int displayBooksByPrice(struct Book book[], int n, int price)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (book[i].price == price)
        {
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("ID: %d\n", book[i].id);
            printf("Quantity: %d\n", book[i].quantity);
            printf("Price: %d\n", book[i].price);
        }
    }
}
int displayBooksByQuantity(struct Book book[], int n, int quantity)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (book[i].quantity == quantity)
        {
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("ID: %d\n", book[i].id);
            printf("Quantity: %d\n", book[i].quantity);
            printf("Price: %d\n", book[i].price);
        }
    }
}
int displayBooksByID(struct Book book[], int n, int id)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (book[i].id == id)
        {
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("ID: %d\n", book[i].id);
            printf("Quantity: %d\n", book[i].quantity);
            printf("Price: %d\n", book[i].price);
        }
    }
}
int displayBooksByAuthor(struct Book book[], int n, char author[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(book[i].author, author) == 0)
        {
            printf("Title: %s\n", book[i].title);
            printf("Author: %s\n", book[i].author);
            printf("ID: %d\n", book[i].id);
            printf("Quantity: %d\n", book[i].quantity);
            printf("Price: %d\n", book[i].price);
        }
    }
}

//===================================
struct Book
{
    char title[50];
    char author[50];
};

void bookInfo(struct Book book , int n){
    puts("Fill all the book info :");
    for(int i = 0 ; i < n ; i++){
        printf("Book %d :\n",i+1);
        printf("Title :\n");scanf("%s",book.title);
        printf("Author :\n");scanf("%s",book.author);
    }
}
void readINfo(struct Book book, int n){
    for (int i = 0; i < n; i++)
    {
        printf("title = %s\n",book.title);
        printf("author = %s\n",book.author);
        printf("\n======================\n");
    }
    
}
void main()
{
    int n ;
    printf("enter number of books :\n");scanf("%d",&n);
    struct Book b ;
    bookInfo(b , n);
    readINfo(b,n);
}

*/

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
