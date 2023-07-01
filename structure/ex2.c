/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Details
{
    int quantity;
    int color ;
};
struct Item
{
    char description[200];
    int price ;
    int totalPrice;
    struct Details details ;
};
int x ;
void getItem(struct Item items , int n ){
    puts("enter Item info :");
    for (int i = 0; i < n; i++)
    {
        printf("Item %d :\n",i+1);
        printf("enter desc :\n");scanf("%s",items[i].description);
        printf("enter price :\n");scanf("%d",&items[i].price);
        printf("how many details for the item :\n");scanf("%d",&x);
        for (int i = 0; i < x; i++)
        {
            printf("enter color :\n");scanf("%d",&items[i].details.color);
            printf("enter quantity :\n");scanf("%d",&items[i].details.quantity);
        }
    }
}

void display(struct Item items , int n ){
    puts("Items info ");
    for(int i = 0 ; i < n ; i++){
        printf("Item %d :\n",i+1);
        printf("desc : %s \n",items[i].description);
        printf("price : %d \n",items[i].price);
        printf("details : \n");
        for(int j = 0 ; j < n ; j++){
            printf("color : %d \n",items[j].details.color);
            printf("quantity : %d \n",items[j].details.quantity);
        }
        printf("total price = %d * %d = %d ",items.price , items.details.quantity, items.price * items.details.quantity);
    }
}

void main()
{
    struct Item i ;
    int n ;
    printf("enter n : "); 
    scanf("%d",&n);
    getItem(i ,n );
    display(i,n);
}

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Details
{
    int quantity;
    int color;
};

struct Item
{
    char description[200];
    int price;
    int totalPrice;
    struct Details details;
};

void getItem(struct Item *items, int n)
{
    printf("Enter Item info:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Item %d:\n", i + 1);
        printf("Enter desc:\n");
        scanf("%s", items[i].description);
        printf("Enter price:\n");
        scanf("%d", &items[i].price);
        printf("How many details for the item:\n");
        scanf("%d", &items[i].details.color);
        printf("Enter quantity:\n");
        scanf("%d", &items[i].details.quantity);
    }
}

void display(struct Item *items, int n)
{
    printf("Items info:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Item %d:\n", i + 1);
        printf("Desc: %s\n", items[i].description);
        printf("Price: %d\n", items[i].price);
        printf("Details:\n");
        printf("Color: %d\n", items[i].details.color);
        printf("Quantity: %d\n", items[i].details.quantity);
        printf("Total price = %d * %d = %d\n", items[i].price, items[i].details.quantity, items[i].price * items[i].details.quantity);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    struct Item *items = (struct Item *)malloc(n * sizeof(struct Item));
    getItem(items, n);
    display(items, n);
    free(items); // Free the allocated memory
    return 0;
}

