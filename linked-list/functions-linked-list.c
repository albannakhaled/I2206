#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* link;
} node;

node* head = NULL; // Global head pointer for the linked list

// Function to create an empty linked list
void create() {
    head = NULL;
}

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->link = head;
    head = newNode;
}

// Function to insert a node at a specified position in the linked list
void insertAtPosition(int data, int position) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;

    if (position == 1) {
        newNode->link = head;
        head = newNode;
        return;
    }

    node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("Invalid position. Node insertion failed.\n");
        free(newNode);
        return;
    }

    newNode->link = temp->link;
    temp->link = newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->link = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->link != NULL) {
        temp = temp->link;
    }

    temp->link = newNode;
}

// Function to delete the first node from the linked list
void deleteAtBeginning() {
    if (head == NULL) {
        printf("Linked list is empty. Deletion failed.\n");
        return;
    }

    node* temp = head;
    head = head->link;
    free(temp);
}

// Function to delete a node at a specified position from the linked list
void deleteAtPosition(int position) {
    if (head == NULL) {
        printf("Linked list is empty. Deletion failed.\n");
        return;
    }

    if (position == 1) {
        deleteAtBeginning();
        return;
    }

    node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->link;
    }

    if (temp == NULL || temp->link == NULL) {
        printf("Invalid position. Node deletion failed.\n");
        return;
    }

    node* nodeToDelete = temp->link;
    temp->link = nodeToDelete->link;
    free(nodeToDelete);
}

// Function to delete the last node from the linked list
void deleteAtEnd() {
    if (head == NULL) {
        printf("Linked list is empty. Deletion failed.\n");
        return;
    }

    if (head->link == NULL) {
        free(head);
        head = NULL;
        return;
    }

    node* temp = head;
    while (temp->link->link != NULL) {
        temp = temp->link;
    }

    free(temp->link);
    temp->link = NULL;
}

// Function to fill the linked list with data provided by the user
void fill() {
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(data);
    }
}

// Function to display the contents of the linked list
void display() {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    node* temp = head;
    printf("Data entered in the list:\n");
    while (temp != NULL) {
        printf("Data = %d\n", temp->data);
        temp = temp->link;
    }
}

// Function to free the allocated memory for the linked list
void freeList() {
    node* temp;
    while (head != NULL) {
        temp = head;
        head = head->link;
        free(temp);
    }
}

int main() {
    create();
    fill();
    // call any function delete , insert ....
    printf("\nLinked list after filling:\n");
    display();

    // Perform various insert and delete operations as needed

    freeList();
    return 0;
}
