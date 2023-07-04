#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *link;
};
void count_nodes(struct node *head);
void add_node(struct node *head , int data);
void print_value(struct node *head);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *current = (struct node *)malloc(sizeof(struct node));

    head -> data = 10 ;
    current -> data = 20 ;
    current -> link = NULL ;
    head -> link = current ;
    
    current = (struct node *)malloc(sizeof(struct node));
    current -> data = 3 ;
    current->link = NULL;
    head->link->link=current;
    
    add_node(head,5);
    count_nodes(head);
    printf("first node data : %d\n",head->data);
    printf("second node data = %d\n",head->data);
    printf("third node data = %d\n",current->data);
    print_value(head);
    

}

void count_nodes(struct node *head){
    int count = 0 ;
    struct node *ptr ;
    ptr = head ;
    if(ptr == NULL){
        printf("list is empty\n");
        return ;
    }
    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("number of nodes = %d\n",count);
}

void add_node(struct node *head , int data){
    struct node *ptr = head ;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data ;
    temp->link = NULL ;
    while(ptr->link != NULL){
        ptr = ptr -> link ;
    }
    ptr ->link = temp ;
}
void print_value(struct node *head){
    if(head == NULL){
        printf("list is empty\n");
    }
    struct node *ptr = head ;
    while(ptr->link != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr -> link ;
    }
}