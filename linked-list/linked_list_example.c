#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *link;
};

void count_nodes(struct node *head);
void add_node(struct node *head , int data);
void print_value(struct node *head);
void delete_node(struct node *head , int data);


int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *current = (struct node *)malloc(sizeof(struct node));
    void insert_node_at_beginning(struct node *head , int data);

    head -> data = 10 ;
    current -> data = 20 ;
    current -> link = NULL ;
    head -> link = current ;
    
    current = (struct node *)malloc(sizeof(struct node));
    current -> data = 3 ;
    current->link = NULL;
    head->link->link=current;
    
    insert_node_at_beginning(head,1);
    add_node(head,5);
    count_nodes(head);
    printf("first node data : %d\n",head->data);
    printf("second node data = %d\n",head->data);
    printf("third node data = %d\n",current->data);
    print_value(head);
    insert_node_at_beginning(head,1);
    delete_node(head,3);
    count_nodes(head);
    return 0;

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

void insert_node_at_beginning(struct node *head , int data){
    struct node * temp = malloc(sizeof(struct node));
    temp->data = data ;
    temp->link = head ;
    head->link = NULL;
}

// create delete node function
void delete_node(struct node *head , int data){
    struct node *ptr = head ;
    struct node *temp ;
    while(ptr->link != NULL){
        if(ptr->link->data == data){
            temp = ptr->link ;
            ptr->link = ptr->link->link;
            free(temp);
            return ;
        }
        ptr = ptr->link;
    }
    printf("data not found\n");
}